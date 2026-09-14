#include<iostream>
using namespace std;

int main() {
    vector<vector<int>> adj(n);

    for(auto &edge : edges) {
        int u = edge[0];
        int v = edge[1];

        adj[u].push_back(v);
    }

    unordered_map<int, vector<int>> adj;

    for(auto &edge : edges) {
        int u = edge[0];
        int v = edge[1];

        adj[u].push_back(v);
    }
}