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
 *
 *
 */
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;


/* perm class holds a permutation of the available vertices
 * 
 */
class City {
	public: 
		string name;
		int index;


	City(int ind, string nam) {
		index = ind;
		name = nam;
	}

};

class Edge {
	public: 
		string from;
		string to;
		int cost;


	Edge(string fromFunc, string toFunc, int costFunc) {
		from = fromFunc;
		to = toFunc;
		cost = costFunc;
	}
};

int main() {

	int i;
	int numCities = 4;
	string cities[] = {"Monetey", "LA", "SF", "SD"};  
	string startCity = cities[0];
	int numEdges = 12;

	vector<Edge> edges;
	
	for(i=0;i<numEdges;i++) {
		edges.push_back(Edge("Monterey","LA",2));
	}

	// What we have so far: 
	// array of all cities 
	// vector of all edges (objects)
	// all city permutations
	//
	// What we need: 
	// Complete the loop (connect end of permutation back to start)
	// check if loop is valid (used edges exist)
	// calculate cost of route
	// display minimum cost route
	
	
	int* p;
	i=0;
	// Permutation checking 
	do {
	// Checking if route is complete
	//
	// FOUND GOOD RESOURCE 
	// https://stackoverflow.com/questions/15517991/search-a-vector-of-objects-by-object-attribute
	// Checking it tomorrow. I'm tired. 
		p = find(edges, edges+numEdges, edges.from==cities[i]);		

		if (p != edges.end())
			cout << "Element Found" << endl;
		else
			cout << "Element Not Found" << endl;
	

		i++;
	} while (next_permutation(cities, cities + numCities));
	
	return 1;
}
