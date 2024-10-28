#include <vector>
#include <algorithm>
using namespace std;

int nonConstructibleChange(vector<int> coins) {
  sort(coins.begin(), coins.end()); //nlog(n)
  
  int min_impossible_change = 0;
  
  for(int i = 0; i < coins.size(); i++){
    if(coins[i] > min_impossible_change + 1){
      return min_impossible_change + 1;
    }
    min_impossible_change += coins[i];
  }
  
  return min_impossible_change + 1;
}
