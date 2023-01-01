// Your First C++ Program

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void dfs(auto adj, int s, int e)
// {
//     // process node s
//     for (auto u : adj[s])
//     {
//         if (u != e)
//             dfs(adj, u, s);

//     }
// }
vector<int> adj[4];
bool visited[4];

void dfs(int s)
{
    if (visited[s])
        return;
    visited[s] = true;
    cout<<s<<" ";
    // process node s
    for (auto u : adj[s])
    {
        dfs(u);
    }
}

int main()
{
    // cout << "Hello World!";

    // vector<int> adj[4];
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);
    // cout << adj;
    // bool visited[N];
    // dfs(adj, x, 0);
    dfs(0);
    return 0;
}

