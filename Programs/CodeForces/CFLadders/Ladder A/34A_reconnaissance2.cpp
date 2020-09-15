#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;

    cin >> N;
    
    vector<int> soldiers;

    for(int i = 1; i <= N; i++){
        int height;

        cin >> height;

        soldiers.push_back(height);
    }

    int lowest, first, second, aux;

    lowest = abs(soldiers[0] - soldiers[N - 1]);
    first = N;
    second = 1;

    for(int i = 0; i < N - 1; i++){
        aux = abs(soldiers[i] - soldiers[i + 1]);

        if(aux < lowest){
            lowest = aux;
            first = i + 1;
            second = i + 2;
        }
    }

    cout << first << " " << second << endl;

    return 0;
}
