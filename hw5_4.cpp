/* Title: hw5_4.cpp
 * Abstract:
 *
 * Author: Colin Reed
 * ID:1234
 * Date: 6/1/2020
 * HackerRank:
 */

#include <iostream>
#include <vector>
using namespace std;

void dfs(int u, int visited[], vector<int> graph[]) {
	visited[u] = 1;
	for(int v:graph[u]) {
		if(visited[v]==0) {
			dfs(v,visited,graph);
		}
	}
}

int main() {
  
	int numVert, numEdge;
	cin >> numVert;
   	cin >> numEdge;

   	vector<int> graph[numVert];

   	for(int i=0;i<numEdge;i++) {
       		int a, b;
       		cin >> a >> b;
       		graph[a].push_back(b);
   	}

   	int visited[numVert];
   	for(int i=0;i<numVert;i++) {
		visited[i] = 0;
	}

   	int prev = -1;
	bool flag = true;
   	for(int i=0;i<numVert;i++) {
       		if(visited[i]==0) {
           		dfs(i,visited,graph);
           		if(prev!=-1){
               			cout << "Edge: " << prev << "-" << i << endl;
				flag = false;
			}
			prev = i;
		}
   	}
	if(flag) {
		cout << "No new edge:" << endl;
	}
}
