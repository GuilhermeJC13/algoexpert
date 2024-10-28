#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  int array_size = array.size();

  for(int i = 0; i < array_size; i++){
    array[i] = array[i] * array[i];
  }

  sort(array.begin(), array.end());
  return array;
}
