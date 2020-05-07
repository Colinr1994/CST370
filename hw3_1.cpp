/* Title: hw2_3.cpp
 * Abstract: This program converts user input directed graph data into adjacent list format.
 *
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 05/4/2020
 * HackerRank: https://www.hackerrank.com/contests/cst370-su20-hw2/challenges/adjacency-list/submissions/code/1323379255
 */

#include <iostream>
using namespace std;

bool palindrome(string in) {
  if (in.empty()) {
    return 1;
  } else {
    if(in.back() == in.front()) {
      palindrome("a");
    } else { return 0;}
  }
}


int main() {
  bool var = palindrome("a");

  cout << var;

  return 0;
}
