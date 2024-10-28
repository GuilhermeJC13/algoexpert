#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
  int size = array.size();
  for(int i = 0; i < size; i++){
    if(array[i] == toMove){
      array.erase(array.begin() + i);
      array.push_back(toMove);
      i--; 
      size--;
    }
  }
  return array;
}
