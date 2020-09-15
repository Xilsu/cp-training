#include <bits/stdc++.h>
 
#define MAX 100
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int N;
 
    cin >> N;
 
    int a, max, min, maxPos, minPos;
        
    cin >> a;
 
    max = min = a;
    maxPos = minPos = 0;
 
    for(int i = 1; i < N; i++){
        int a;
        
        cin >> a;
 
        if(a > max){
            max = a;
            maxPos = i;
        }
        else if(a <= min){
            min = a;
            minPos = i;
        }
    }
 
    if(minPos < maxPos){
        minPos++;
    }
 
    printf("%d\n", (maxPos) + (N - minPos - 1));
}