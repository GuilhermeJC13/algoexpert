#include <vector>
#include <stdlib.h>
#include <cmath>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  int array_size = array.size();
  vector<int> result(array_size, 0);
  
  int min_value_index = 0;
  int max_value_index = array_size-1;

  for(int i = array_size-1; i >= 0; i--){
    int min_value = array[min_value_index];
    int max_value = array[max_value_index];
    
    if(abs(min_value) > abs(max_value)){
      result[i] = pow(min_value, 2);
      min_value_index++;
    }
    else{
      result[i] = pow(max_value, 2);
      max_value_index--;
    }
  }
  
  return result;
}
