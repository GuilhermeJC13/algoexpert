#include <vector>
#include <algorithm>
using namespace std;

int firstDuplicateValue(vector<int> array) { 
  for(int element : array){
    int absElement = abs(element);
    
    if(array[absElement - 1] < 0){
      return absElement;
    }
    array[absElement - 1] = -array[absElement - 1];
  }  
  return -1; 
}
