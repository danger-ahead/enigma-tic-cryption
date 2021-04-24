#include <bits/stdc++.h>
using namespace std;

#include "walzen.h"

//char r1, r2, r3;

string rotorI = "EKMFLGDQVZNTOWYHXUSPAIBRCJ", rotorII = "AJDKSIRUXBLHWTMCQGZNPYFVOE", rotorIII = "BDFHJLCPRTXVZNYEIWGAKMUSQO",
rotorIV = "	ESOVPZJAYQUIRHXLNFTGKDCMWB", rotorV = "VZBRGITYUPSDNHLXAWMJQOFECK", rotorVI = "	JPGVOUMFYQBENHZRDKASXLICTW";
string original = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string rotor1, rotor2, rotor3;

void walzen::rotorChecker(int a, int b, int c){
    if(a == 1) rotor1 = rotorI;
    else if(a == 2) rotor1 = rotorII;
    else if(a == 3) rotor1 = rotorIII;
    else if(a == 4) rotor1 = rotorIV;
    else if(a == 5) rotor1 = rotorV;
    else if(a == 6) rotor1 = rotorVI;

    if(b == 1) rotor2 = rotorI;
    else if(b == 2) rotor2 = rotorII;
    else if(b == 3) rotor2 = rotorIII;
    else if(b == 4) rotor2 = rotorIV;
    else if(b == 5) rotor2 = rotorV;
    else if(b == 6) rotor2 = rotorVI;

    if(c == 1) rotor3 = rotorI;
    else if(c == 2) rotor3 = rotorII;
    else if(c == 3) rotor3 = rotorIII;
    else if(c == 4) rotor3 = rotorIV;
    else if(c == 5) rotor3 = rotorV;
    else if(c == 6) rotor3 = rotorVI;
}

string walzen::rotorSetter(string s, char a, char b, char c){
    int index1 = original.find(a);

    int j = index1;
    for(int i = 0; i < s.size(); i++){
        s[i] = rotor3[j];
        j = j + 1;
        if(j == 26) j = 0;
    }
    return s;
}