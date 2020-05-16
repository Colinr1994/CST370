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


	Edge(string from, string to, int cost) {
		from = from;
		to = to;
		cost = cost;
	}
};

int main() {

	int i;
	int numCities = 4;
	string cities[] = {"Monetey", "LA", "SF", "SD"};  
	int numEdges = 12;
	Edge edges[numEdges];
	edges[0] = Edge("Monterey","LA",2);
	
	

	return 1;
}
