/* Title: hw3_1.cpp
 * Abstract: 
 *
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 05/07/2020
 * HackerRank:
 */

#include <iostream>
#include <ctype.h>
//#include <algorithm>
using namespace std;

bool palindrome(string in) {
  if (in.empty() || in.length()==1)
    return 1;
  else
    if (in.back() == in.front()) {
      in.erase(0,1);
      in.erase(in.size()-1);
      return palindrome(in);
    } else
      return 0;
}

bool removeChar(char in) {
  if(isalnum(in) || in == ' ') {
      return false;
  } else
    return true;

}


int main() {
  string input;
  cin >> input;

  // input = remove_if(input.begin(), input.end(), isalnum);

  for (int i = 0; i < input.length(); i++) {
    if (removeChar(input[i])) {
      input.erase(i,1);
    }
  }

  bool var = palindrome(input);

  if(var) {
    cout << "TRUE" << endl;
  } else {
    cout << "FALSE" << endl;
  }

  return 0;
}
