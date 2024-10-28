#include <vector>
#include <algorithm>
using namespace std;

bool compareIntervalEnding(vector<int> a, vector<int> b){
    return a[0] < b[0];
}

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> intervals) {
  vector<vector<int>> mergedOverlapIntervals;

  sort(intervals.begin(), intervals.end(), compareIntervalEnding);

  int begin = 0;
  int end = 0;
  for(int i = 0; i < intervals.size(); i++){
    if(i < intervals.size() -1 && intervals[i][1] >= intervals[i+1][0]){
      if(intervals[i][1] > intervals[i+1][1]){
        begin = intervals[i][0];
        end = intervals[i][1]; 
      }
      else{
        begin = intervals[i][0];
        end = intervals[i+1][1]; 
      }

      intervals[i+1] = {begin, end};
    }
    else{
      begin = intervals[i][0];
      end = intervals[i][1];
      mergedOverlapIntervals.push_back({begin, end});
    }
  }
  
  return mergedOverlapIntervals;
}