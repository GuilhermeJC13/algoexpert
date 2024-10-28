#include <unordered_set>
#include <vector>

using namespace std;

bool zeroSumSubarray(vector<int> nums) {
  unordered_set<int> numSum = {0};
  int currentSum = 0;

  for(int num : nums){
    currentSum += num;
    if(numSum.find(currentSum) != numSum.end()){
      return true;
    }
    numSum.insert(currentSum);
  }
  
  return false;
}
