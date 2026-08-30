void BFS() {
    queue<int> que;

    que.push(u);
    result.push_back(u);
    visited[u] = true;

    while(!que.empty()) {
        int u = que.front();
        que.pop();

        for(int &v : adj[u]) {
            if(!visited[v]) {
                que.push(v);
                visited[v] = true;
                result.push_back(v);
            }
        }
    }
}