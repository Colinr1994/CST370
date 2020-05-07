/* Title: hw2_3.cpp
 * Abstract: This program converts user input directed graph data into adjacent list format.
 *
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 05/07/2020
 * HackerRank:
 */

#include <iostream>
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
  if(in == ' ') {
      return true;
  } else
    return false;

}


int main() {
  string input;
  cin >> input;

  //input = remove_if(input.begin(), input.end(), removeChar);

  for (size_t i = 0; i < input.length(); i++) {
    if (removeChar(input[i])) {
      cout << input[i] << endl;
      input.erase(i,1);
    }
  }

  bool var = palindrome(input);

  cout << var << endl;

  return 0;
}
