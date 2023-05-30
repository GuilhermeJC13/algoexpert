#include <vector>
#include <unordered_map>
using namespace std;

// Implementing hash tables in c++: https://www.modernescpp.com/index.php/hash-tables

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  unordered_map<int,int> hash_table;
  int array_size = array.size();

  for(int i = 0; i < array_size; i++){
    hash_table[array[i]] = i;
  }
  
  for(int i = 0; i < array_size; i++){
    int ideal_number = targetSum - array[i];
    if(ideal_number == array[i]) continue;
    
    auto iterator = hash_table.find(ideal_number);

    if(iterator != hash_table.end()){
      return vector<int>{array[i], array[iterator->second]};
    }
  }
  return {};
}
