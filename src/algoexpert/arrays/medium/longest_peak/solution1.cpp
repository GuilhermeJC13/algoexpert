#include <vector>
using namespace std;

int longestPeak(vector<int> array) {
  int longestPeak = 0;
  int currentPeak = 1;
  bool peakIncrease = false;
  bool peakDecrease = false;

  for(int i = 1; i < array.size(); i++){
    if(array[i] > array[i-1]){
      if(peakDecrease){
        currentPeak = 1;
        peakDecrease = false;
      }
      peakIncrease = true;
      currentPeak++;
    }
    else if(array[i] < array[i-1]){
      peakDecrease = true;
      currentPeak++;
    }
    else{
      currentPeak = 1;
      peakIncrease = false;
      peakDecrease = false;
    }
    
    if(peakIncrease && peakDecrease && currentPeak >= 3 && currentPeak > longestPeak){
      longestPeak = currentPeak;
    }
  }
  
  return longestPeak;
}
