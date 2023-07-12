#include <vector>
#include <algorithm>

using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {
  bool redHigher = true;
  bool blueHigher = true;

  sort(redShirtHeights.begin(), redShirtHeights.end());
  sort(blueShirtHeights.begin(), blueShirtHeights.end());

  for(int i = 0; i < redShirtHeights.size(); i++){
    if(redShirtHeights[i] > blueShirtHeights[i]){
      blueHigher = false;
    }
    else if(blueShirtHeights[i] > redShirtHeights[i]){
      redHigher = false;
    }
    else{
      return false;
    }
  }
  
  return (redHigher ^ blueHigher);
}
