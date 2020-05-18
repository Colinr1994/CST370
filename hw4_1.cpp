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
	
	int x,y;
	for(i=0;i<numEdges;i++) {
		cin >> in;
		x = findIndex(names,in);
		cin >> in;
		y = findIndex(names,in);
		costs[x].push_back(y);
	}
	
}



int main() {

	vector<vector<int>> costs;
	vector<string> names;
	
	//input(costs, names);

	names.push_back("Monterey");
	names.push_back("LA");
	names.push_back("SF");
	names.push_back("SD");  
	
	// Change names into circuit 
	names.push_back(names[0]);

	do {	
		// Calculate cost of circuit!  

	} while (next_permutation(names.begin()+1, names.end()-1)); 

	return 1;
}
