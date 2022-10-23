#include <bits/stdc++.h>
using namespace std;

int main() {
  int nodes;
  cin >> nodes;

  int edges;
  cin >> edges;

  queue<int> q;
  vector<int> adj[nodes + 1];
  vector<int> vis(nodes + 1);

  for (int i = 0; i < edges; ++i) {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for (int i = 1; i <= nodes; ++i) {
    if (vis[i])
      continue;

    vis[i] = 1;
    q.push(i);

    while (!q.empty()) {
      int node = q.front();
      cout << node << " ";
      q.pop();

      for (auto &x : adj[node]) {
        if (!vis[x]) {
          vis[x] = 1;
          q.push(x);
        }
      }
    }
  }

  return 0;
}