#include <bits/stdc++.h>
using namespace std;

#include "steckerbrett.h"

string s, s2;

void steckerbrett::input(){
    char c,c2;
    cout<<"***plugboard configurations(20 letters has to be swapped) : *** : ";
    for(int i = 0; i < 10; i++){
        cin>>c>>c2;
        s = s + (char)toupper(c);
        s2 = s2 + (char)toupper(c2);
    }
}

string steckerbrett::changed(string check){

    transform(check.begin(), check.end(), check.begin(), ::toupper);

    for(int i = 0; i < check.size(); i++){
        for(int j = 0; j < 10; j++){
            if(check[i] == s[j]){
                check[i] = s2[j];
                break;
            }
            if(check[i] == s2[j]){
                check[i] = s[j];
                break;
            }
        }
    }
    return check;
}