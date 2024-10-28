#include <vector>

using namespace std;

vector<int> arrayOfProducts(vector<int> array) {
  vector<int> output;
  
  for(int i = 0; i < array.size(); i++){
    int currentProduct = 1;
    
    for(int j = 0; j < array.size(); j++){
      if(j != i){
         currentProduct = currentProduct * array[j]; 
      }
    }
    output.push_back(currentProduct);
  }
  return output;
}
