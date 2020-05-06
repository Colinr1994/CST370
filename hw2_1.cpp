/* Title: hw2_1.cpp
 * Abstract: This program reverses input numbers.
 * V1 - Strings; V2 - % (all int)
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 05/4/2020
 * HackerRank: https://www.hackerrank.com/contests/cst370-su20-hw2/challenges/reverse-number-13/submissions/code/1323377815
 */

#include <iostream>
using namespace std;

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
