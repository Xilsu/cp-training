#include <bits/stdc++.h>
 
#define MAX 100
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long n, bottles, ml, lime, slices, salt, mlDrink, saltDrink;
 
    cin >> n >> bottles >> ml >> lime >> slices >> salt >> mlDrink >> saltDrink;
 
    mlDrink = (bottles * ml) / mlDrink;
    slices = lime * slices;
    saltDrink = salt / saltDrink;
 
    printf("%ld\n", min(mlDrink, min(slices, saltDrink)) / n);
}