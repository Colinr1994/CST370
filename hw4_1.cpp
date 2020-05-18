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

// Generalized input function. 
void input(vector<vector<int>> &costs, vector<string> &names) {

	int numNames;
	cin >> numNames;
	costs.resize(numNames);
	names.resize(numNames);

	for(i=0;i<numNames;i++) {
		cin >> in1;
		names.push_back(in1);		
	}
	
	int numEdges;
	cin >> numEdges;
	
	string in;
	int x,y;
	for(i=0;i<numEdges;i++) {
		cin >> in;
		x = find(names.begin(),names.end(),in);
		cin >> in;
		y = find(names.begin(),names.end(),in);
		costs[x].push_back(y);
	}
	
}


int main() {

	vector<<int>> costs;
	vector<string> names;
	
	//input(costs, names);

	do {	


	} while (next_permutation(cities.begin()+1, cities.end()-1)); 

	return 1;
}
