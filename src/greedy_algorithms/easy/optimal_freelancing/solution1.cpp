#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int optimalFreelancing(vector<unordered_map<string, int>> jobs) {
  int optimalPayment = 0;
  int remainingDays = 7;

  while(remainingDays > 0){
    int indexToRemove = -1;
    int currentMaxPayment = 0;
    for(int i = 0; i < jobs.size(); i++){
      if(jobs[i].at("deadline") >= remainingDays){
        if(jobs[i].at("payment") > currentMaxPayment){
          indexToRemove = i;
          currentMaxPayment = jobs[i].at("payment");
        }
      }
    }
    if(indexToRemove != -1){
      jobs.erase(jobs.begin() + indexToRemove);
      optimalPayment += currentMaxPayment;
    }
    remainingDays--;
  }
  
  return optimalPayment;
}
