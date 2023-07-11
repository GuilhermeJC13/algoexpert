#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> sweetAndSavory(vector<int> dishes, int target) {
  vector<int> sweetDishes;
  vector<int> savoryDishes;

  for(int dish : dishes){
    if(dish < 0){
      sweetDishes.push_back(dish);
    }
    else{
      savoryDishes.push_back(dish);
    }
  }

  sort(sweetDishes.begin(), sweetDishes.end(), [](int a, int b){ return abs(a) < abs(b); });
  sort(savoryDishes.begin(), savoryDishes.end());

  vector<int> bestSequence = {0, 0};
  int bestSequenceScore = INT_MAX;
  int currentSequenceScore;
  int currentSequenceSum;
  int sweetIndex = 0;
  int savoryIndex = 0;
  
  while(sweetIndex < sweetDishes.size() && savoryIndex < savoryDishes.size()){
    currentSequenceSum = sweetDishes[sweetIndex] + savoryDishes[savoryIndex];

    if(currentSequenceSum <= target){
      currentSequenceScore = target - currentSequenceSum;
      if(currentSequenceScore < bestSequenceScore){
        bestSequenceScore = currentSequenceScore;
        bestSequence[0] = sweetDishes[sweetIndex];
        bestSequence[1] = savoryDishes[savoryIndex];
      }
      savoryIndex++;
    }
    else{
      sweetIndex++;
    }
  }
  
  return bestSequence;
}
