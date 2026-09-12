#include<iostream>
using namespace std;

void topolical_sort_dfs(int u, vector<int>& visited, stack<int>& st, vector<vector<int>>& adj) {
    visited[u] = true;

    for(int &v : adj[u]) {
        if(!visited[u]) topolical_sort_dfs(v, visited, st, adj);
    }
    st.push(u);
    return;
}

int main() {
    int V = 4;
    vector<vector<int>> edges =  {
        {3, 0}, {1, 0}, {2, 0}
    };
    //convert edges to adjcency list;
    vector<vector<int>> adj(V);
    for(auto &edge: edges) {
        int u = edge[0];
        int v = edge[1];

        adj[u].push_back(v);
    }

    vector<int> visited(V, false);
    stack<int> st;

    for(int i=0; i<V; i++) {
        if(!visited[i]) topolical_sort_dfs(i, visited, st, adj);
    }

    while(!st.empty()) {
        cout << st.top() << ",";
        st.pop();
    }
}