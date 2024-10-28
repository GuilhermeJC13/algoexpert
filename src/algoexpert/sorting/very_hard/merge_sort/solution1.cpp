#include <vector>
#include <cmath>

using namespace std;

vector<int> merge(vector<int> vectorOne, vector<int> vectorTwo){
  vector<int> mergedVector;

  while(vectorOne.size() > 0 && vectorTwo.size() > 0){
    if(vectorOne[0] > vectorTwo[0]){
      mergedVector.push_back(vectorTwo[0]);
      vectorTwo.erase(vectorTwo.begin());
    }
    else{
      mergedVector.push_back(vectorOne[0]);
      vectorOne.erase(vectorOne.begin());
    }
  }

  while(vectorOne.size() > 0){
    mergedVector.push_back(vectorOne[0]);
    vectorOne.erase(vectorOne.begin());
  }

  while(vectorTwo.size() > 0){
    mergedVector.push_back(vectorTwo[0]);
    vectorTwo.erase(vectorTwo.begin());
  }

  return mergedVector;
}

vector<int> mergeSort(vector<int> array) {
  if(array.size() == 1){
    return array;
  }
  
  int halfSize = floor(array.size()/2);

  vector<int> vectorOne;
  for(int i = 0; i < halfSize; i++){
    vectorOne.push_back(array[i]);
  }

  vector<int> vectorTwo;
  for(int i = halfSize; i < array.size(); i++){
    vectorTwo.push_back(array[i]);
  }

  vector<int> mergedVectorOne = mergeSort(vectorOne);
  vector<int> mergedVectorTwo = mergeSort(vectorTwo);
  
  return merge(mergedVectorOne, mergedVectorTwo);
}
