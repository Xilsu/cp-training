#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string str1, str2;
 
    cin >> str1 >> str2;
 
    int cont;
 
    cont = 0;
 
    for(int i = 0; i < str1.size(); i++){
        if(toupper(str1[i]) > toupper(str2[i])){
            cont++;
 
            break;
        }
        else if(toupper(str1[i]) < toupper(str2[i])){
            cont--;
 
            break;
        }
    }
 
    cout << cont << endl;
 
    return 0;
}