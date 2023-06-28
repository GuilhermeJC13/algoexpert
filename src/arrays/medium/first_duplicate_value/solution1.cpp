#include <vector>
#include <unordered_map>
using namespace std;

int firstDuplicateValue(vector<int> array) { 
  unordered_map<int, bool> memory;

  for(int i = 0; i < array.size(); i++){
    if(memory.find(array[i]) == memory.end()){
      memory[array[i]] = true;
    }
    else{
      return array[i];
    }
  }
  
  return -1; 
}
