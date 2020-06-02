/* Title: hw5_3.cpp
 * Abstract:
 *
 * Author: Colin Reed
 * ID:1234
 * Date: 5/31/2020
 * HackerRank:
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
*/


void removeNode(vector<vector<int>> graph, int del) {
	// First remove component from graph
	cout << "Test" << endl;

	// Second remove and cout all other instances of that link.

}

int main () {

	int numInd;
	numInd = 4;
	//cin >> numInd;

	int numEdg;
	numEdg = 5;
	//cin >> numEdg;

	int input[] = {0,1,0,2,0,3,1,3,2,3};

	// Graph holds source of incoming links.
	vector<vector<int>> graph;
	graph.resize(numInd);

	// Need to revise for final input
	for(int i=0;i<numEdg*2;i+=2) {
		int from = input[i];
		int to = input[i+1];
		graph[to].push_back(from);
	}
	//Graph sucessfully stored.

	//Display in-degree values
	for(int i=0;i<numInd;i++) {
		cout << "In-degree[" << i << "]:" << graph[i].size() << endl;
	}

	// No Longer Safe to use numInd

	cout << "Order:";
	while(!graph.empty()) {

		// Delete node if subvector is empty
		for(int i=0;i<numInd;i++) {
			if(graph[i].empty()) {
				//removeNode(graph, graph[i][0]);
			}
		}


	}

	return 0;
}
