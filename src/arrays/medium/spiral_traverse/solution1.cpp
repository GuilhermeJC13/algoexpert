#include <vector>
using namespace std;

vector<int> spiralTraverse(vector<vector<int>> array) {
  int n = array.size() - 1;
  int m = array[0].size() - 1;
  int output_size = (n+1) * (m+1);
  
  int startingColumn = 0;
  int endingColumn = m;
  int startingRow = 0;
  int endingRow = n;

  vector<int> output;
  
  while(output.size() < output_size){
    for(int i = startingColumn; i <= endingColumn; i++){
      output.push_back(array[startingRow][i]);
    }
    for(int j = startingRow + 1; j <= endingRow; j++){
      output.push_back(array[j][endingColumn]);
    }
    for(int i = endingColumn - 1; i >= startingColumn; i--){
      if(startingRow == endingRow) break;
      output.push_back(array[endingRow][i]);
    }
    for(int j = endingRow - 1; j >= startingRow + 1; j--){
      if(startingColumn == endingColumn) break;
      output.push_back(array[j][startingColumn]);
    }
    startingColumn++;
    endingColumn--;
    startingRow++;
    endingRow--;
  }
  
  return output;
}