#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  sort(arrayOne.begin(), arrayOne.end());
  sort(arrayTwo.begin(), arrayTwo.end());

  int smallestDifference = INT_MAX;
  int currentDifference = INT_MAX;
  int idxArrayOne = 0;
  int idxArrayTwo = 0;
  vector<int> smallestPair;
  
  while(idxArrayOne < arrayOne.size() && idxArrayTwo < arrayTwo.size()){
    int firstNum = arrayOne[idxArrayOne];
    int secondNum = arrayTwo[idxArrayTwo];
    if(firstNum < secondNum){
      currentDifference = secondNum - firstNum;
      idxArrayOne++;
    }
    else if(secondNum < firstNum){
      currentDifference = firstNum - secondNum;
      idxArrayTwo++;
    }
    else{
      return vector<int>{firstNum, secondNum};
    }

    if(currentDifference < smallestDifference){
      smallestDifference = currentDifference;
      smallestPair = {firstNum, secondNum};
    }
  }
  
  return smallestPair;
}
