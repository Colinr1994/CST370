/* Title: hw5_2.cpp
 * Abstract: 
 *
 * Author: Colin reed
 * ID:1234
 * Date: 5/30/2020
 * HackerRank:
 */

#include <iostream>
#include <vector>
using namespace std;


void firstApproach(vector<int> in) {

	int i = 0;
	int j = in.size()-1;
	
	while(i<j) {
	
		if(in[i]<0) {
			i++;
		}
		if(in[j]>0) {
			j--;
		}

		//Swap
		if(in[i]>0 && in[j]<0) {
			int swap = in[i];
			in[i] = in[j];
			in[j] = swap;
		}
	
	}

	for(int k=0;k<in.size();k++) {
		cout << in[k] << " ";
	}
	cout << endl;
}

//void secondApproach(vector<int> in) {} 

int main () {
	
	int size = 8;
	
	vector<int> A;
	
	int input[size] = {5,-3,1,-9,-8,2,-4,7};
	
	for(int i=0;i<size;i++) {
		A.push_back(input[i]);
	}
	
	firstApproach(A);

	return 0;
}
