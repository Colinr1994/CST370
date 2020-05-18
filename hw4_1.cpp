/* Title: hw4_1.cpp
 * Abstract:
 *
 * Reads inpit graph data from user. 
 * Presents path for traveling salesman problem. 
 * Maximum number of verticies <= 20
 *
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 05/15/2020
 * HackerRank: 
 */

#include <iostream>
#include <algorithm> 
#include <functional>
#include <vector>

using namespace std;

class Edge {
	public:
		string from;
		string to;
		int cost;

	Edge(string f, string t, int c) {
		from = f;
		to = t;
		cost = c;
	}

	Edge() {
		from = "";
		to = "";
		cost = -1;
	}
	
};

// search the vector. If the link exists, return cost. Else return -1
int checkCircuit(string inFrom, string inTo, vector<Edge> vec) {

	return 1;
}


int main() {

	int i,j, numCities, totalCost, cost, bestCost;
	bool validCircuit= true;
	vector<string> cities, best;
	cities.push_back("City1");
	cities.push_back("City2");
	cities.push_back("City3");
	cities.push_back("City4");

	vector<Edge> edges;
	Edge workingEdge("City1","City2", 5);
	edges.push_back(workingEdge);

	cities.push_back(cities[0]); // Completing Circuit
	
	do {	
		totalCost=0;
		for (i=0;i<cities.size();i++) {

			cost = checkCircuit(cities[i],cities[i+1],edges);
			cout << cost << endl;
			if(cost==-1) {
				validCircuit=false;
			} else {
				totalCost+= cost;
			}
		}
		
		if(validCircuit) {
			//Is current cost minimum? Save circuit & cost
			// if cost<bestCost -> best=cities;
		}

	} while (next_permutation(cities.begin()+1, cities.end()-1)); 
	// doesn't permute beginning or end	

	return 1;
}
