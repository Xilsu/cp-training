/*
Luis Henrique Morelli
Ciclovias - OBI 2016
https://olimpiada.ic.unicamp.br/pratique/p2/2016/f2/ciclovias/
08/09/2020
*/

#include <bits/stdc++.h>

#define MAX 100001

using namespace std;

void dfs(vector<int> g[], int node, int prevNode, long long dp[]){    
    for(int i = 0; i < g[node].size(); i++){  
        int to; 
        
        to = g[node][i];
        
        if(to > prevNode){
            dfs(g, to, node, dp); 

            dp[node] = max(dp[node], dp[to] + 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long N;
    long long M;

    cin >> N >> M;

    vector<int> adjList[N + 1];

    for(long long i = 0; i < M; i++){
        long a, b;

        cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    long long dp[N + 1];

    memset(dp, 0, sizeof(dp));
        
    dfs(adjList, 1, -1, dp);

    for(int i = 1; i <= N; i++){
        cout << dp[i] << " ";
    }

    cout << "\n";

    for(int i = 2; i <= N; i++){
        memset(dp, 0, sizeof(dp));
        
        dfs(adjList, i, -1, dp);

        for(int j = 1; j <= N; j++){
            cout << dp[j] << " ";
        }

        cout << "\n";
    }

    /*cout << dp[1];

    for(int i = 2; i <= N; i++){
        cout << " " << dp[i];
    }*/

    cout << "\n";

    return 0;
}

/*long long dfs(vector<vector<long>> g, long node, long prevNode, long long aux){
    long long length;

    length = aux;
    
    for(long i = 0; i < g[node].size(); i++){
        long to;

        to = g[node][i];
        
        if(to > prevNode){
            length = max(length, dfs(g, to, node, aux + 1));
        }
    }

   return length;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long N;
    long long M;

    cin >> N >> M;

    vector<vector<long>> adjList (MAX + 1);

    for(long long i = 0; i < M; i++){
        long a, b;

        cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    for(long i = 1; i <= N; i++){
        sort(adjList[i].begin(), adjList[i].end());
    }

    cout << dfs(adjList, 1, -1, 1);

    for(long i = 2; i <= N; i++){
        cout << " " << dfs(adjList, i, -1, 1);
    }

    cout << "\n";

    return 0;
}*/