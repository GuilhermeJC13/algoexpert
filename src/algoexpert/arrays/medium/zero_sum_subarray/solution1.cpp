#include <unordered_map>
#include <vector>

using namespace std;

bool zeroSumSubarray(vector<int> nums) {
  unordered_map<int, bool> numsSum;

  int lastSum = 0;
  for(int i = 0; i < nums.size(); i++){
    if(nums[i] == 0){
      return true;
    }
    int currentSum = nums[i] + lastSum;
    if(currentSum == 0){
      return true;
    }
    if(numsSum.find(currentSum) == numsSum.end()){
      numsSum[currentSum] = true;
      lastSum = currentSum; 
    }
    else{
      return true;
    }
  }
  
  return false;
}
