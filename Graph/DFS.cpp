void DFS() {
    if(visited[u]) return;

    visited[u] = true;
    result.push_back(u);

    for(int &v : adj[u]) {
        if(!visited[v]) {
            DFS();
        }
    }
}