#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;

    cin >> N;

    for(int i = 0; i < N; i++){
        string string;

        cin >> string;

        int size;

        size = string.size();

        if(size > 10){
           cout << string[0] << size - 2 << string[size - 1] << endl;
        }
        else{
            cout << string << endl;
        }
    }

    return 0;
}
