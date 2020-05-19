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

// input names vector and searchterm string 
// return index
int findIndex(vector<string> names, string term) {
	//do {	} while (next_permutation(cities, cities + numCities));
	auto it = find(names.begin(), names.end(), term);
	return distance(names.begin(),it);
}

// Generalized input function. 

// Find the the two search strings and read the value in the vector array. If DNE, return -1
int checkRoute(vector<vector<int>> costs,vector<string> names, string from, string to) {
	int fromIndex = findIndex(names, from);
	int toIndex = findIndex(names, to);
	//int out = costs[fromIndex][toIndex];	

	return 1;
	
}

int main() {

	vector<vector<int>> costs;
	vector<string> names;
	
	int numCities = 4;
	names.push_back("Monterey");
	names.push_back("LA");
	names.push_back("SF");
	names.push_back("SD");  
	

	costs.resize(numCities);
	for(int i=0; i<numCities; i++) {
		costs[i].resize(numCities);
	}

	costs= {{0,2,5,7},{2,0,8,9},{5,8,0,1},{7,3,1,0}};
		
	// Circuit represents circuits and holds indices from names. 
	vector<int> circuit;
	for(int i=0;i<names.size(); i++) {
		circuit.push_back(i);
	}
	circuit.push_back(0);


	bool connectFailed = false;
	int totalCost;
	vector<int> bestPerm;
	int bestCost=10000;
	do {
		totalCost=0;
		for(int i=0; i<circuit.size()-1;i++){
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


	for(int i=0;i<circuit.size();i++) {
		cout << names[bestPerm[i]] << endl;
	}

	return 1;
}
