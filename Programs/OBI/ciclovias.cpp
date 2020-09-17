/*
Luis Henrique Morelli
Ciclovias - OBI 2016
https://olimpiada.ic.unicamp.br/pratique/p2/2016/f2/ciclovias/
08/09/2020
*/

#include <bits/stdc++.h>

#define MAX 100001

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

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

    sort(adjList.begin(), adjList.end());

    long long dp[N + 1];

    for(long i = 1; i <= N; i++){
        dp[i] = 1;
    }

    for(int i = N - 1; i >= 1; i++){
        for(int j = 0; j < g[i].size(); j++){
            if(j > i){
                dp[i] = max(dp[i], dp[g[i][j]] + 2);
            }            
        }
    }

    cout << dp[1];

    for(int i = 2; i <= N; i++){
        cout << " " << dp[i];
    }

    cout << "\n";

    return 0;
}