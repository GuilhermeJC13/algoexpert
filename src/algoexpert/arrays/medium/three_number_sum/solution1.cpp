#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  sort(array.begin(), array.end());
  vector<vector<int>> sum_vector;
  unordered_map<int, int> hash_table;

  for(int i = 0; i < array.size(); i++){
    hash_table[array[i]] = i;
  }
  
  for(int i = 0; i < array.size(); i++){
    for(int j = i+1; j < array.size(); j++){
      int ideal_number = targetSum - array[i] - array[j];
      if(ideal_number > array[j] && hash_table.find(ideal_number) != hash_table.end()){
        sum_vector.push_back({array[i], array[j], ideal_number});
      }
      
    }
  }
  return sum_vector;
}
