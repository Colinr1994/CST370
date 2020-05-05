/* Title: hw2_3.cpp
 * Abstract: This program converts user input directed graph data into adjacent list format.
 *
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 05/4/2020
 * HackerRank:
 */

#include <iostream>
using namespace std;


int main() {
  int vertices,edges,x,y;
  string str;

  cin >> vertices;
  cin >> edges; // edges <= vertices

  // 2d bool array represents all possible edges
  bool data[vertices][vertices];


// WTF
  for(x=0;x<vertices;x++) {
    for(y=0;y<vertices;y++) {
      data[x][y] = false;
    }
  }

  for (int i=0; i<edges;i++) {
    // cin >> str;
    // x = (int)str[0];
    // x = (int)str[2];
    cin >> x;
    cin >> y;
    data[x][y] = true;
  }

  for(x=0;x<vertices;x++) {
    cout << x;
    for(y=0;y<vertices;y++) {
      if(data[x][y]) {
        cout << "->" << y;
      }
    }
    cout << endl;
  }

  return 0;
}
