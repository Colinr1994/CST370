/* Title: hw2_2.cpp
 * Abstract: Time Subtraction
 *
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 05/4/2020
 * HackerRank: https://www.hackerrank.com/contests/cst370-su20-hw2/challenges/time-difference-2/submissions/code/1323381996
 */

#include <iostream>
#include <iomanip>
using namespace std;

int toInt(string input) {
  input.erase(2, 1);
  input.erase(4, 1);
  return stoi(input);
};

long int toSec(int time) {
  long int out = time % 100;
  time/=100;
  out +=time % 100 * 60;
  time/=100;
  out += time * 60 * 60;
  return out;
}

int main() {

  string time;
  int time1, time2, hour, min, sec;
  long int outSec, out;

  cin >> time;
  time1 = toInt(time);
  cin >> time;
  time2 = toInt(time);

  outSec = toSec(time2) - toSec(time1);
  if(outSec<0) { outSec+= 86400; }
  hour = outSec/(60*60); // # hours
  outSec %= (60*60); // Left after removing hours
  out*=100; // Move
  min = outSec/60; // # mins
  outSec %= 60; // Left after removing mins
  out *= 100; // Move
  sec = outSec; // Seconds

  cout << setw(2) << setfill('0') << hour << ":" << setfill('0') << setw(2) << min << ":" << setw(2) << setfill('0') << sec << endl;

  return 0;
}
