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

	int i, numCities, numEdges;
	numCities = 4;
	string cities[] = {"Monetey", "LA", "SF", "SD"};  
	string startCity = cities[0];
	
	numEdges = 12;
	Edge edges[12];  
	
	return 1;
}
