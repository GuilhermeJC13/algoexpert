#include <vector>
using namespace std;

vector<vector<int>> transposeMatrix(vector<vector<int>> matrix) {
  int matrix_h = matrix.size();
  int matrix_w = matrix[0].size();
  vector<vector<int>> transposed_matrix(matrix_w, vector<int>(matrix_h, 0));

  for(int i = 0; i < matrix_h; i++){
    for(int j = 0; j < matrix_w; j++){
      transposed_matrix[j][i] = matrix[i][j];
    }
  }
  
  return transposed_matrix;
}
