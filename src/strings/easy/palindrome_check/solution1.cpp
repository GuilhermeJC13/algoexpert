#include <string>

using namespace std;

bool isPalindrome(string str) {
  for(int i = 0; i < str.size(); i++){
    int palindromeIndex = str.size()-i-1;
    if(i == palindromeIndex) break;
    if(str[i] != str[palindromeIndex]) return false;
  }
  return true;
}
