#include <bits/stdc++.h>
 
#define MAX 100
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int N;
 
    cin >> N;
 
    vector<int> gifts (MAX + 1);
 
    for(int i = 1; i <= N; i++){
        int a;
 
        cin >> a;
 
        gifts[a] = i;
    }
 
    printf("%d", gifts[1]);
 
    for(int i = 2; i <= N; i++){
        printf(" %d", gifts[i]);
    }
 
    printf("\n");
 
    return 0;
}