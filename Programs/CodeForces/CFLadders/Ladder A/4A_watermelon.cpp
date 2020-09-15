#include <bits/stdc++.h>

using namespace std;

vector<int> getDivs(int W){
    vector<int> divs;

    for(int i = 2; i <= sqrt(W); i++){
        if(W % i == 0){
            divs.push_back(i);

            if(W / i != 1){
                divs.push_back(W / i);
            }
        }
    }

    sort(divs.begin(), divs.end());

    return divs;
}

int main(){
    int W;

    cin >> W;

    vector<int> divs;

    divs = getDivs(W);

    for(int i = 0; i < divs.size(); i++){
        if((W / divs[i]) % 2 == 0 ){
            cout << "YES" << endl;

            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
