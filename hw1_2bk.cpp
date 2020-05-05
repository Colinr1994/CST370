/* Title: hw1_2.cpp
 * Abstract: This program accepts an input array and returns it sorted
 * with repetitions removed.
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 04/30/2020
 * HackerRank: https://www.hackerrank.com/contests/cst370-su20-hw0/challenges/370-hw0-1/submissions/code/1323171837
 */

#include <iostream>
#include <algorithm>
using namespace std;

struct Event {
  int eventStartTime;
  int eventEndTime;
  bool isOverLapped;
};

bool sortEventTimeInterval(Event event1, Event event2)
{
  return (event1.eventStartTime < event2.eventStartTime) ? true : false;
}

int CountOverLappedEvents(Event eventIntervals[], int numberOfEvents)
{
  int countOverlappedEvent =0;

  sort(eventIntervals, eventIntervals + numberOfEvents , sortEventTimeInterval);

  for (int i = 1; i < numberOfEvents; i++)

    if (eventIntervals[i - 1].eventEndTime >= eventIntervals[i].eventStartTime)
    {
      eventIntervals[i-1].isOverLapped =true;
      eventIntervals[i].isOverLapped =true;
    }

  for (int i = 1; i < numberOfEvents; i++)
    if (eventIntervals[i].isOverLapped)
    {
      countOverlappedEvent++;
    }

    return countOverlappedEvent;
}



int main()
{
  int numberOfEvents;

  cin >> numberOfEvents;

  Event eventIntervals[numberOfEvents];

  for (int i = 0; i < numberOfEvents; i++) {
  cin>> eventIntervals[i].eventStartTime >> eventIntervals[i].eventEndTime;
  eventIntervals[i].isOverLapped =false;
  }

  cout << "Answer:"<< CountOverLappedEvents(eventIntervals,numberOfEvents);

  return 0;
}
