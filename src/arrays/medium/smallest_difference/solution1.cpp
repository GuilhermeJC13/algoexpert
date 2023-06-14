#include <vector>
#include <unordered_map>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

bool compare(unordered_map<string, int> data1, unordered_map<string, int> data2){
  return data1["value"] > data2["value"];
}

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  int min_difference = INT_MAX;
  vector<int> result = {};
  int element_array_one = INT_MAX;
  int element_array_two = INT_MAX;
  
  vector<unordered_map<string, int>> data;
  
  for(int i = 0; i < arrayOne.size() + arrayTwo.size(); i++){ //O(NM)
    unordered_map<string, int> current_data;
    if(i < arrayOne.size()){
      current_data["value"] = arrayOne[i];
      current_data["list"] = 1;
    }
    else{
      current_data["value"] = arrayTwo[i-arrayOne.size()];
      current_data["list"] = 2;
    }
    data.push_back(current_data);
  }

  sort(data.begin(), data.end(),compare); //O(NMlog(NM))

  for(int i = 0; i < data.size(); i++){ // O(NM)
    if(data[i]["list"] == 1)
      element_array_one = data[i]["value"];
    if(data[i]["list"] == 2)
      element_array_two = data[i]["value"];

    if(abs(element_array_one - element_array_two) < min_difference){
      min_difference = abs(element_array_one - element_array_two);
      result = {element_array_one, element_array_two};
    }
  }
  
  return result;
}
