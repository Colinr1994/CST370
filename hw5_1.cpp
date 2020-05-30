/* Title : hw5_1.cpp
 * Abstract: 
 *
 * Author: Colin Reed
 * ID: 1234
 * Date: 5/30/2020
 * HackerRank:
 */

#include <iostream> 
using namespace std; 
  
int maxRecursive(int A[], int size) 
{ 
	if (size == 1) 
		return A[0]; 
	return max(A[size-1], maxRecursive(A, size-1)); 
} 
  
int main() 
{
	int size;
	cin >> size;
	int A[size];
	for(int i=0; i<size;i++) {
		cin >> A[i];	
	}
	cout <<  maxRecursive(A, size) << endl; 
    	return 0; 
}
