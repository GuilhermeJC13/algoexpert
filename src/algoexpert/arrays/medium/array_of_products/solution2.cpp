#include <vector>

using namespace std;

vector<int> arrayOfProducts(vector<int> array) {
  vector<int> output (array.size(), 1);
  int leftProduct = 1;
  int rightProduct = 1;

  for(int i = 0; i < array.size(); i++){
    output[i] = leftProduct;
    leftProduct = leftProduct * array[i];
  }

  for(int i = array.size() - 1; i >= 0; i--){
    output[i] *= rightProduct;
    rightProduct = rightProduct * array[i];
  }
  
  return output;
}
