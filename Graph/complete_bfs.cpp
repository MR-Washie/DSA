#include<iostream>
using namespace std;

int main() {
    int v, e;
    cout << "Enter the number of vertex : ";
    cin >> v;
    cout << "Enter the number of edges : ";
    cin >> e;

    vector<vector<int>> adj(v);

    for(int i=0; i<e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u); // remove for this directed graph
    }

    for(int i =0; i<v; i++) {
        cout << i << " -> ";
        for(int v : adj[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}