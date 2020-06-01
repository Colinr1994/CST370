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
	

	// Why do I need the -1??
	while(i<j-1) {
	
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

void secondApproach(vector<int> in) {
	

	int i = 0;
	int j = 0;
	
	while(j<in.size()) {

		// while i is negative && i is within array 
		if(in[i]<0) {
			i++;
		}
		j++;

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

int main () {
	
	int size;
	cin >> size;


	int in;
	vector<int> A;	
	for(int i=0;i<size;i++) {
		cin >> in;
		A.push_back(in);
	}

	vector<int> B;

	copy(A.begin(),A.end(),back_inserter(B));
	
	firstApproach(A);
	secondApproach(B);

	return 0;
}
