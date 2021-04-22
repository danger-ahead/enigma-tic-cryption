#include <bits/stdc++.h>
using namespace std;

#include "steckerbrett.h"

string steckerbrett::s, steckerbrett::s2;

void steckerbrett::input(){
    char c,c2;
    cout<<"\n***steckerbrett***\n";
    for(int i = 0; i < 10; i++){
        cin>>c>>c2;
        s = s + (char)toupper(c);
        s2 = s2 + (char)toupper(c2);
    }
}

string steckerbrett::changed(string check, string s, string s2){

    transform(check.begin(), check.end(), check.begin(), ::toupper);

    // for(int i = 0; i < check.size(); i++){
    //     if (check[i] == 'A') check[i] = plugBoard[i+13];
    //     else if (check[i] == 'A') check[i] = plugBoard[0+13];
    //     else if (check[i] == 'B') check[i] = plugBoard[1+13];
    //     else if (check[i] == 'C') check[i] = plugBoard[2+13];
    //     else if (check[i] == 'D') check[i] = plugBoard[3+13];
    //     else if (check[i] == 'E') check[i] = plugBoard[4+13];
    //     else if (check[i] == 'F') check[i] = plugBoard[5+13];
    //     else if (check[i] == 'G') check[i] = plugBoard[6+13];
    //     else if (check[i] == 'H') check[i] = plugBoard[7+13];
    //     else if (check[i] == 'I') check[i] = plugBoard[8+13];
    //     else if (check[i] == 'J') check[i] = plugBoard[9+13];
    //     else if (check[i] == 'K') check[i] = plugBoard[10+13];
    //     else if (check[i] == 'L') check[i] = plugBoard[11+13];
    //     else if (check[i] == 'M') check[i] = plugBoard[12+13];

    //     else if (check[i] == 'N') check[i] = plugBoard[0];
    //     else if (check[i] == 'O') check[i] = plugBoard[1];
    //     else if (check[i] == 'P') check[i] = plugBoard[2];
    //     else if (check[i] == 'Q') check[i] = plugBoard[3];
    //     else if (check[i] == 'R') check[i] = plugBoard[4];
    //     else if (check[i] == 'S') check[i] = plugBoard[5];
    //     else if (check[i] == 'T') check[i] = plugBoard[6];
    //     else if (check[i] == 'U') check[i] = plugBoard[7];
    //     else if (check[i] == 'V') check[i] = plugBoard[8];
    //     else if (check[i] == 'W') check[i] = plugBoard[9];
    //     else if (check[i] == 'X') check[i] = plugBoard[10];
    //     else if (check[i] == 'Y') check[i] = plugBoard[11];
    //     else if (check[i] == 'Z') check[i] = plugBoard[12];
    //     else return plugBoard;
    // }

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