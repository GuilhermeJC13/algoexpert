#include <vector>
#include <algorithm>

using namespace std;

bool reverseSort(int speedA, int speedB){
  return speedA > speedB;
}

int tandemBicycle(vector<int> redShirtSpeeds, vector<int> blueShirtSpeeds, bool fastest) {
  int totalSpeed = 0;

  sort(redShirtSpeeds.begin(), redShirtSpeeds.end());
  
  if(fastest) sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end(), reverseSort);
  else sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end());

  for(int i = 0; i < redShirtSpeeds.size(); i++){
    if(redShirtSpeeds[i] > blueShirtSpeeds[i]) totalSpeed += redShirtSpeeds[i];
    else totalSpeed += blueShirtSpeeds[i];
  }
  return totalSpeed;
}
