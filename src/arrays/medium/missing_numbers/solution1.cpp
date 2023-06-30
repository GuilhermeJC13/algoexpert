#include <vector>
#include <cmath>

using namespace std;

vector<int> missingNumbers(vector<int> nums) {
  int numsSum = 0;
  int idealSum = ((1 + nums.size() + 2) * (nums.size() + 2)) / 2;

  for(int num : nums){
    numsSum += num;
  }

  int missingNumbersSum = idealSum - numsSum;
  float missingNumbersMean = static_cast<float>(missingNumbersSum) / 2;

  int sumRight = 0;
  int sumLeft = 0;
  int leftIdealSum = ((1 + floor(missingNumbersMean)) * floor(missingNumbersMean)) / 2;
  int rightIdealSum = ((floor(missingNumbersMean) + 1 + nums.size() + 2) * ((nums.size() + 3) - (floor(missingNumbersMean) + 1))) / 2;

  for(int num : nums){
    if(num <= missingNumbersMean) sumLeft += num;
    else sumRight += num;
  }
  
  return {leftIdealSum - sumLeft, rightIdealSum - sumRight};
}
