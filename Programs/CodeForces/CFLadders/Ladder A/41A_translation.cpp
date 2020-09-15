#include <bits/stdc++.h>

using namespace std;

string revStr(string string){
    int N; 
    
    N = string.size();

    for(int i = 0; i < N / 2; i++){
        swap(string[i], string[N - i - 1]);
    }

    return string;
}

int main(){
    string berland, birland;

    cin >> berland >> birland;

    berland = revStr(berland);

    if(berland == birland){
        cout << "YES";
    }
    else{
        cout << "NO"; 
    }

    cout << endl;

    return 0;
}
