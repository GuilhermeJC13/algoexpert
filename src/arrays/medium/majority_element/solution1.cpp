#include <vector>
using namespace std;

int majorityElement(vector<int> array) {
  int majorityElement = array[0];
  int majorityCounter = 0;

  for(int element : array){
    if(majorityCounter == 0) majorityElement = element;
    if(element == majorityElement) majorityCounter++;
    else majorityCounter--;
  }
  return majorityElement;
}