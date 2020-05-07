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
#include <chrono>
using namespace std;


int main() {
  int vertices,edges,x,y;
  string str;

  cin >> vertices;
  cin >> edges; // edges <= vertices

  // 2d bool array represents all possible edges
  bool data[vertices][vertices];


  for(x=0;x<vertices;x++) {
    for(y=0;y<vertices;y++) {
      data[x][y] = false;
    }
  }

  for (int i=0; i<edges;i++) {
    cin >> x >> y;
    data[x][y] = true;
  }

  auto start = chrono::high_resolution_clock::now();

  for(x=0;x<vertices;x++) {
    cout << x;
    for(y=0;y<vertices;y++) {
      if(data[x][y]) {
        cout << "->" << y;
      }
    }
    cout << endl;
  }
  
  auto diff = chrono::high_resolution_clock::now() - start;
  auto t1 = chrono::duration_cast<chrono::nanoseconds>(diff);
  cout << t1.count() << endl;

  return 0;
}
