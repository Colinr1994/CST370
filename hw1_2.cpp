/* Title: hw1_2.cpp
 * Abstract: This program sorts and finds collisions between event times
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 04/30/2020
 * HackerRank: https://www.hackerrank.com/contests/cst370-su20-hw1/challenges/max-events
 */

#include <iostream>
using namespace std;

struct Event {
  int start;
  int end;
};

int main()
{
  int numEvents,i,j,overlaps,count=0;
  cin >> numEvents;
  int starts[numEvents], ends[numEvents];

  for(i=0;i<numEvents;i++) {
    cin >> starts[i];
    cin >> ends[i];
  }
  // Sort the times. Need to implement a class or struct to hold the start and end time in relation to the entry

  // Determine if the start time for the next event is before the end time of the previous

  // increase count for each time it comes first

}
