#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  int array_size = array.size();
  
  for(int i = 0; i < array_size; i++){
    for(int j = i+1; j < array_size; j++){
      if(array[i] + array[j] == targetSum){
        return vector<int>{array[i], array[j]};
      }
    }
  }
  return {};
}
