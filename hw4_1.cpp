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
class city {
	public: 
		string name;
		int index;


	city(int ind, string nam) {
		index = ind;
		name = nam;
	}

};

class edge {
	public: 
		string from;
		stirng to;
		int cost;
	edges(string from, string to, int cost) {
		from = from;
		to = to;
		cost = cost;
	}
}

int main() {

	int i;
	int numCities = 4;
	string cities[] = {"Monetey", "LA", "SF", "SD"};  
	int numEdges = 12;
	int edges[]; //Incomplete
	vector<city*> cities;
	
	for(i=0; i<input1;i++) {
		cities.push_back(new city(i,names[i]));		
	}
	
	// Now I have all permutations. I need to calculate values and check
	// viability to see if they are legal. 
	
	do {
		cout << names[0] << names[1] << names[2] << names[3] <<endl;
  	} while ( next_permutation(names,names+4) );

	//cout << cities[2]->index << cities[2]->name << endl;	

	return 1;
}
