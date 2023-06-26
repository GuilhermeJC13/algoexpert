#include <vector>
using namespace std;

bool isMonotonic(vector<int> array) {

  bool isIncreasing = false;
  bool isDecreasing = false;

  for(int i = 0; i < array.size(); i++){
    bool notOnLastElement = i < array.size() - 1;
    
    if(notOnLastElement && array[i] > array[i+1]){
      isIncreasing = true;
    }
    if(notOnLastElement && array[i] < array[i+1]){
      isDecreasing = true;
    }
    if(isIncreasing && isDecreasing) return false;
  }
  
  return true;
}
