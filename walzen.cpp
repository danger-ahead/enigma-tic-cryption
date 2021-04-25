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
    int balance = (int)(c - 'A');
    
    for(int i = 0; i < s.size(); i++){
        if (s[i] == 'A') s[i] = rotor3[(0 + balance) % 26];
        else if (s[i] == 'B') s[i] = rotor3[(1 + balance) % 26];
        else if (s[i] == 'C') s[i] = rotor3[(2 + balance) % 26];
        else if (s[i] == 'D') s[i] = rotor3[(3 + balance) % 26];
        else if (s[i] == 'E') s[i] = rotor3[(4 + balance) % 26];
        else if (s[i] == 'F') s[i] = rotor3[(5 + balance) % 26];
        else if (s[i] == 'G') s[i] = rotor3[(6 + balance) % 26];
        else if (s[i] == 'H') s[i] = rotor3[(7 + balance) % 26];
        else if (s[i] == 'I') s[i] = rotor3[(8 + balance) % 26];
        else if (s[i] == 'J') s[i] = rotor3[(9 + balance) % 26];
        else if (s[i] == 'K') s[i] = rotor3[(10 + balance) % 26];
        else if (s[i] == 'L') s[i] = rotor3[(11 + balance) % 26];
        else if (s[i] == 'M') s[i] = rotor3[(12 + balance) % 26];
        else if (s[i] == 'N') s[i] = rotor3[(13 + balance) % 26];
        else if (s[i] == 'O') s[i] = rotor3[(14 + balance) % 26];
        else if (s[i] == 'P') s[i] = rotor3[(15 + balance) % 26];
        else if (s[i] == 'Q') s[i] = rotor3[(16 + balance) % 26];
        else if (s[i] == 'R') s[i] = rotor3[(17 + balance) % 26];
        else if (s[i] == 'S') s[i] = rotor3[(18 + balance) % 26];
        else if (s[i] == 'T') s[i] = rotor3[(19 + balance) % 26];
        else if (s[i] == 'U') s[i] = rotor3[(20 + balance) % 26];
        else if (s[i] == 'V') s[i] = rotor3[(21 + balance) % 26];
        else if (s[i] == 'W') s[i] = rotor3[(22 + balance) % 26];
        else if (s[i] == 'X') s[i] = rotor3[(23 + balance) % 26];
        else if (s[i] == 'Y') s[i] = rotor3[(24 + balance) % 26];
        else if (s[i] == 'Z') s[i] = rotor3[(25 + balance) % 26];

        balance = balance + 1;
    }
    return s;
}