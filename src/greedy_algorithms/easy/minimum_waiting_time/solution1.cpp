#include <vector>
#include <algorithm>

using namespace std;

int minimumWaitingTime(vector<int> queries) {
  int waitingTime = 0;
  int waitingSum = 0;
  
  sort(queries.begin(), queries.end());
  
  for(int i = 0; i < queries.size() - 1; i++){
    waitingTime += (queries[i] + waitingSum);
    waitingSum += queries[i];
  }
  
  return waitingTime;
}