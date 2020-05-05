/* Title: hw2_2.cpp
 * Abstract: This program reverses input numbers.
 * V1 - Strings; V2 - % (all int)
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 05/4/2020
 * HackerRank:
 */

#include <iostream>
using namespace std;

int clearString(string input) {
  if (input.length = 4) {
    
  }
  if (input.length = 5) {

  }
}


int main() {

  int num,out=0;
  cin >> num;

  while(num > 0) {
    out = 10*out + num%10;
    num/=10;
  }

  cout << out << endl;
  return 0;
}
