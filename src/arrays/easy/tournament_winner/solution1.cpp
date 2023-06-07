#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
  unordered_map<string, int> score_table;

  for(int i = 0; i < competitions.size(); i++){
    string home_team = competitions[i][0];
    string away_team = competitions[i][1];
    
    score_table[home_team] = 0;
    score_table[away_team] = 0;
  }

  for(int i = 0; i < competitions.size(); i++){
    int current_result = results[i];
    string home_team = competitions[i][0];
    string away_team = competitions[i][1];
    
    if(current_result == 1){
      score_table[home_team] += 3;
    }
    else{
      score_table[away_team] += 3;
    }
  }
  string winner;
  int max_score = -1;
  
  for(auto team : score_table){
    string current_team = team.first;
    int current_score = team.second;

    if(max_score == -1 || current_score > max_score){
      winner = current_team;
      max_score = current_score;
    }
    
  }
  // Write your code here.
  return winner;
}