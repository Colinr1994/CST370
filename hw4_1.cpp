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


/* Notes: 
 *
 * Input: 
 *
 * 	Int -> number of vetices in the graph 
 *
 * 	string -> names of verices (First input is starting point)
 * 		(Always one word)
 *
 * 	int -> number of edges in the graph
 *
 * 	string? -> edge information. name1(Source) name2(dest) cost
 *
 * Output: 
 *
 * "Path:" 
 *
 * BRANCH - Simple. 
 * Removing vectors and objects. 
 *
 * TSP needs to start and end with citys[0]. I need to remove the first city when generating the permutation. 
 *
 */
#include <iostream>
#include <algorithm> 
#include <functional>

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

int main() {

	int i,j, numCities, numEdges;
	numCities = 4;
	string cities[] = {"Monetey", "LA", "SF", "SD"};  
	string startCity = cities[0];
	
	string perm[numCities+1];
	perm[numCities+1] = cities[0];

	numEdges = 12;
	Edge edges[12];  

	i=0;
	do {
		// For each loop here, cities array is generating a new loop. 
		for(j=0;j<numCities;j++) {
		cout << perm[numCities +1];
		//cout << permutation[i];
		}
		
		cout << endl << endl;
		i++;
	} while (next_permutation(cities + 1, cities + numCities));	

	return 1;
}
