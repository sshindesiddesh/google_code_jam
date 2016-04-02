#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct node {
	int index;
	int c;
	vector <int> r;
} node_t;

vector <node_t> graph;

int main()
{
	freopen("klan.in", "rt", stdin);
	freopen("klan.out", "wt", stdout);
	
	int n, m;
	int i, j, k, l;
	int c;
	
	node_t node;
	map < int, vector<int> > mp;
	pair <int, int> p;
	cin >> n >> m;
	
	graph.clear();
	mp.clear();

	for (i = 0; i < n; i++) {
		cin >> c;
		node.index = i;
		node.c = c;
		graph.push_back(node);
		mp[c].push_back(i);
	}

	for (i = 0; i < (n - 1); i++) {
		cin >> p.first >> p.second;
		graph[p.first].r.push_back(p.second);
		graph[p.second].r.push_back(p.first);
	}
	
	for (i = 0; i < m; i++) {
		
	}
return 0;
}
