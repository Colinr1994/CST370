/* Title: hw5_3.cpp
 * Abstract:
 *
 * Author: Colin Reed
 * ID:1234
 * Date: 5/31/2020
 * HackerRank: https://www.hackerrank.com/contests/cst370-su20-hw5/challenges/kahns-topological-sort/submissions/code/1324024007
 */

#include <iostream>
#include <vector>
using namespace std;


/*
Notes:

vec<vec<int>> storing incoming links.

if vec is empty, node has no INCOMING links and can be deleted.

Links related to deleted node are removed using erase-remove idiom. Search whole vec<vec<>> to find all .

For sample run zero:

0,1,2,3
  0,0,0
      1
      2

remove node 0 -> search and remove all links origionating form zero. 1,2, and 3 would all have links removed.

Update: 2/6 - vec<vec<>> not working out well. Empty vectors are causing me issues. Switching to array. 

*/

// Function goals: 
// Remove node from graph
// Print removed node (index or value??)
// Remove links coming from removed node 
//void removeNode(vector<vector<int>> graph, int del) { }

int main () {

	int numInd;
	cin >> numInd;

	int numEdg;
	cin >> numEdg;

	// Graph holds source of incoming links.
	vector<vector<int>> graph;

	int graph2 [numInd][numInd];
	for(int i=0;i<numInd;i++) {
		for(int j=0;j<numInd;j++) {
			graph2[i][j] = -1;
		}
	}
	
	graph.resize(numInd);

	for(int i=0;i<numEdg*2;i+=2) {
		int from, to;
		cin >> from >> to;
		graph[to].push_back(from);
	}

	//Display in-degree values
	for(int i=0;i<numInd;i++) {
		cout << "In-degree[" << i << "]:" << graph[i].size() << endl;
	}

	// No Longer Safe to use numInd or numEdg

	cout << "Order:";
	
	return 0;
}
