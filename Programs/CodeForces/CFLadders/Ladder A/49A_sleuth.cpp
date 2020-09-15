#include <bits/stdc++.h>

using namespace std;

string vowels = {"AEIOUY"};

string stringUpper(string string){
    for(int i = 0; i < string.size(); i++){
        string[i] = toupper(string[i]);
    }

    return string;
}

int main(){
    string question;

    getline(cin, question);

    question = stringUpper(question);

    int aux;

    aux = question.size() - 1;

    while(question[aux] < 'A' || question[aux] > 'Z'){
        aux--;
    }

    if(vowels.find(toupper(question[aux])) != string::npos){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
