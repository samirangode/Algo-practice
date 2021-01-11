#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

const int N = 1001;

vector<int> adj[N], depth(N), max_depth(N);

int n, root, dist;

void dfs(int i, int par){
	max_depth[i] = depth[i];
	for(int j: adj[i]){
		if(j==par) continue;
		
		depth[j] = depth[i],dfs(j, i) + 1;
		max_depth[i] = max(max_depth[i], max_depth[j]);
		
	}
}

void find_nodes(int i, int par, int req_depth, vwctoe)