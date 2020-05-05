/* Title: hw1_1.cpp
 * Abstract: This program accepts an input array and returns it sorted
 * with repetitions removed.
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 04/29/2020
 * HackerRank: https://www.hackerrank.com/contests/cst370-su20-hw0/challenges/370-hw0-1/submissions/code/1323171837
 */

#include <iostream>
using namespace std;

int main()
{
	// Creating Variables and collecting arrays
	int length;
	int length2;


	cin >> length;

	int arr[length];
	int input;

	for(int i=0; i<length;i++) {
		cin >> input;
		arr[i] = input;
	};

	cin >> length2;
	int arr2[length2];
	for(int i=0; i<length2;i++) {
		cin >> input;
		arr2[i] = input;
	}
	// Input Complete

	int out[length];

	int c=0;
	for(int i=0; i<length; i++) {
		for(int j=0; j<length2; j++) {
			if(arr[i] == arr2[j]) {
				out[i] =1;
			}
		}
	}

	int count =0;
	for(int i=0; i<length; i++) {
		if(out[i]==1) {
			count++;
		}
	}

	int end[count];

	int turn =0;
	for(int i=0;i<length; i++) {
		if(out[i]==1) {
			end[turn] = arr[i];
			turn++;
		}
	}


	for(int i=0; i<length; i++) {
		cout << end[i] << endl;
	}


	return 0;
}
