#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
  string winner;
  int best_score = 0;
  unordered_map<string, int> score_table;

  for(int i = 0; i < competitions.size(); i++){
    string home_team = competitions[i][0];
    string away_team = competitions[i][1];
    string current_winner;
    int current_result = results[i];

    if(current_result == 1){
      current_winner = home_team;
    }
    else{
      current_winner = away_team;
    }

    if(score_table.find(current_winner) == score_table.end()){
      score_table[current_winner] = 0;
    }
    score_table[current_winner] += 3;
    if(score_table[current_winner] > best_score){
      winner = current_winner;
      best_score = score_table[current_winner];
    }
    
  }
  return winner;
}
