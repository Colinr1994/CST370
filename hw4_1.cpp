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

int main() {

	int i;
	int input1 = 4;
	string names[] = {"Monetey", "LA", "SF", "SD"};  
	vector<city*> cities;
	
	for(i=0; i<input1;i++) {
		cities.push_back(new city(i,names[i]));		
	}
	
	// Need to make permutations of indices
	
	// I didn't need to do that. Array already has name and index
	

	cout << cities[2]->index << cities[2]->name << endl;	

	return 1;
}
