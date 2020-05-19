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

void input(vector<vector<int>> costs ,vector<string> names) {

	int numNames;
	cin >> numNames;

	string name;
	costs.resize(numNames);
	for(int i=0; i<numNames; i++) {
		costs[i].resize(numNames);
		cin >> name;
		names.push_back(name);
	}


	int numEdges;
	cin >> numEdges;


	string from, to;
	int cost;
	for(int i=0;i<numEdges;i++) {
		cin >> from >> to >> cost;
		auto it = find(names.begin(),names.end(),from);
		auto it2 = find(names.begin(),names.end(),to);
		costs[distance(names.begin(),it)][distance(names.begin(),it2)]= cost;
	}

}


int main() {

	vector<vector<int>> costs;
	vector<string> names;

	//input(costs,names);

	// Goal is to send the two vectors to the gr
	//



	int numCities = 4;
	names.push_back("Monterey");
	names.push_back("LA");
	names.push_back("SF");
	names.push_back("SD");



	costs= {{0,2,5,7},{2,0,8,9},{5,8,0,1},{7,3,1,0}};

	// Circuit represents circuits and holds indices from names.
	vector<int> circuit;
	for(int i=0;i<(int)names.size(); i++) {
		circuit.push_back(i);
	}
	circuit.push_back(0);


	bool connectFailed = false;
	int totalCost;
	vector<int> bestPerm;
	int bestCost=10000;
	do {
		totalCost=0;
		for(int i=0; i<(int)circuit.size()-1;i++){
			if(costs[circuit[i]][circuit[i+1]] ==0) {
				// No Connection
				cout << "Connection Fail " << endl;
				connectFailed = true;
			} else {
				//Connection
				totalCost += costs[i][i+1];
			}

		}
		if(!connectFailed) {
			if(bestCost > totalCost) {
				bestCost = totalCost;
				//bestPerm = circuit;
				copy(circuit.begin(), circuit.end(), back_inserter(bestPerm));
				cout << totalCost << endl;
			}
			// circuit is connected!
		}
	} while (next_permutation(circuit.begin()+1, circuit.end()-1));


	for(int i=0;i<(int)circuit.size();i++) {
		cout << names[bestPerm[i]] << endl;
	}

	return 1;
}
