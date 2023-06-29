#include <vector>

using namespace std;

int bestSeat(vector<int> seats) {
  int bestSeat = -1;
  int bestSeatScore = 0;

  int currentSeatScore = 0;
  
  for(int i = 0; i < seats.size(); i++){
    if(seats[i] == 1){
      currentSeatScore = 0;
    }
    else{
      currentSeatScore++;

      if(currentSeatScore > bestSeatScore){
        bestSeatScore = currentSeatScore;
        bestSeat = i;
      }
    }
  }

  bestSeat = bestSeat - int{bestSeatScore/2};
  
  return bestSeat;
}
