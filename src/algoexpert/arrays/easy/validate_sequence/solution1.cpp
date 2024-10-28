#include <vector>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int array_size = array.size();
  int sequence_size = sequence.size();
  int counter = 0;
  
  for(int i = 0; i < array_size; i++){
    if(array[i] == sequence[counter]){
      counter++;
    }
    if(counter == sequence_size) return true;
  }
  return false;
}
