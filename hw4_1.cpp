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


int findIndex(vector<string> names, string term) {
	auto it = find(names.begin(), names.end(), term);
	return distance(names.begin(),it);
}

// Generalized input function. 
void input(vector<vector<int>> &costs, vector<string> &names) {

	int numNames,i;
	cin >> numNames;
	costs.resize(numNames);
	names.resize(numNames);

	string in;
	for(i=0;i<numNames;i++) {
		cin >> in;
		names.push_back(in);		
	}
	
	int numEdges;
	cin >> numEdges;
	
	int x,y,cost;
	for(i=0;i<numEdges;i++) {
		cin >> in;
		x = findIndex(names,in);
		cin >> in;
		y = findIndex(names,in);
		costs[x][y].push_back(cost);
	}
	
}

// Find the the two search strings and read the value in the vector array. If DNE, return -1
int checkRoute(vector<vector<int>> costs,vector<string> names, string from, string to) {
	int fromIndex = findIndex(names, from);
	int toIndex = findIndex(names, to);
	//int out = costs[fromIndex][toIndex];	

	return 1;
	// If link has no cost, and is not the same x and y...
	//if(out == 0 && fromIndex != toIndex) {
	//	return -1;
	//} else {return out;};
	
}

int main() {

	vector<vector<int>> costs;
	vector<string> names;
	
	input(costs, names);

	names.push_back("Monterey");
	names.push_back("LA");
	names.push_back("SF");
	names.push_back("SD");  
	
	// Change names into circuit 
	names.push_back(names[0]);

	int loopCost;
	int totalCost=0;
	bool circuitStatus = true;
	do {	
		totalCost =0;
		// Calculate cost of permutation
		for(int i=0;i<names.size(); i++) {
			loopCost = checkRoute(costs,names,names[i],names[i+1]);
			if(loopCost == -1) {circuitStatus = false;} else {totalCost += loopCost;} 
			//cout << loopCost << endl;
		}

		if(circuitStatus) {
			//Check totalCost and compare against current best.
		}

	} while (next_permutation(names.begin()+1, names.end()-1)); 

	return 1;
}
