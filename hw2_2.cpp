/* Title: hw2_2.cpp
 * Abstract:
 * 
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 05/4/2020
 * HackerRank:
 */

#include <iostream>
using namespace std;

int toInt(string input) {
  input.erase(2, 1);
  input.erase(4, 1);
  return stoi(input);
}


int main() {
  string time;
  int time1, time2, hours;

  cin >> time;
  time1 = toInt(time);

  cin >> time;
  time2 = toInt(time);


  cout << time1 << endl << time2 << endl;
  return 0;
}
