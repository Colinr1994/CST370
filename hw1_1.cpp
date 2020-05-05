/* Title: hw1_1.cpp
 * Abstract: This program accepts an input array and returns it sorted
 * with repetitions removed.
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 04/29/2020
 * HackerRank: https://www.hackerrank.com/contests/cst370-su20-hw1/challenges/common-nums
 */

#include <iostream>
using namespace std;



int main()
{
//First take inputs for both arrays
int length1, length2, i, j, swap;
cin >> length1;
int arr1[length1];
for(i=0;i<length1;i++) {
	cin >> arr1[i];
}
cin >> length2;
int arr2[length2];
for(i=0;i<length2;i++) {
	cin >> arr2[i];
}


// Sorting start

for(i=0; i<length1; i++) {
	for (j=0; j<length1-i; j++) {
		if( arr1[j] > arr1[j+1]) {
			swap = arr1[j+1];
			arr1[j+1] = arr1[j];
			arr1[j] = swap;
		}
	}
}

for(i=0; i<length2; i++) {
	for (j=0; j<length2-i; j++) {
		if( arr2[j] > arr2[j+1]) {
			swap = arr2[j+1];
			arr2[j+1] = arr2[j];
			arr2[j] = swap;
		}
	}
}
// Sorting end
// Using while instead of for

// Still need to get rid of repetitions in array 1

cout << "Answer:";
for(i=0; i<length1;i++) {
	for(j=0; j<length2;j++) {
		if(arr1[i]==arr2[j]) {
			cout << " " << arr1[i];
		}
	}
}

	return 0;
}
