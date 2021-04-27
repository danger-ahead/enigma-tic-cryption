#include <bits/stdc++.h>
using namespace std;

#include "walzen.h"

//original German Rotor windings
string rotorI = "EKMFLGDQVZNTOWYHXUSPAIBRCJ", rotorII = "AJDKSIRUXBLHWTMCQGZNPYFVOE", rotorIII = "BDFHJLCPRTXVZNYEIWGAKMUSQO",
rotorIV = "ESOVPZJAYQUIRHXLNFTGKDCMWB", rotorV = "VZBRGITYUPSDNHLXAWMJQOFECK", rotorVI = "JPGVOUMFYQBENHZRDKASXLICTW";
string original = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string reflectorA = "EJMZALYXVBWFCRQUONTSPIKHGD", reflectorB = "YRUHQSLDPXNGOKMIEBFZCWVJAT";

//variables for storing the 3 rotor types
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

string walzen::rotr3(string s, char c){
    int balance3 = (int)(c - 'A');      //check the lead of the initialised rotor letter from the 1st letter (A)
    for(int i = 0; i < s.size(); i++){
        if (s[i] == 'A') s[i] = rotor3[(0 + balance3) % 26];
        else if (s[i] == 'B') s[i] = rotor3[(1 + balance3) % 26];
        else if (s[i] == 'C') s[i] = rotor3[(2 + balance3) % 26];
        else if (s[i] == 'D') s[i] = rotor3[(3 + balance3) % 26];
        else if (s[i] == 'E') s[i] = rotor3[(4 + balance3) % 26];
        else if (s[i] == 'F') s[i] = rotor3[(5 + balance3) % 26];
        else if (s[i] == 'G') s[i] = rotor3[(6 + balance3) % 26];
        else if (s[i] == 'H') s[i] = rotor3[(7 + balance3) % 26];
        else if (s[i] == 'I') s[i] = rotor3[(8 + balance3) % 26];
        else if (s[i] == 'J') s[i] = rotor3[(9 + balance3) % 26];
        else if (s[i] == 'K') s[i] = rotor3[(10 + balance3) % 26];
        else if (s[i] == 'L') s[i] = rotor3[(11 + balance3) % 26];
        else if (s[i] == 'M') s[i] = rotor3[(12 + balance3) % 26];
        else if (s[i] == 'N') s[i] = rotor3[(13 + balance3) % 26];
        else if (s[i] == 'O') s[i] = rotor3[(14 + balance3) % 26];
        else if (s[i] == 'P') s[i] = rotor3[(15 + balance3) % 26];
        else if (s[i] == 'Q') s[i] = rotor3[(16 + balance3) % 26];
        else if (s[i] == 'R') s[i] = rotor3[(17 + balance3) % 26];
        else if (s[i] == 'S') s[i] = rotor3[(18 + balance3) % 26];
        else if (s[i] == 'T') s[i] = rotor3[(19 + balance3) % 26];
        else if (s[i] == 'U') s[i] = rotor3[(20 + balance3) % 26];
        else if (s[i] == 'V') s[i] = rotor3[(21 + balance3) % 26];
        else if (s[i] == 'W') s[i] = rotor3[(22 + balance3) % 26];
        else if (s[i] == 'X') s[i] = rotor3[(23 + balance3) % 26];
        else if (s[i] == 'Y') s[i] = rotor3[(24 + balance3) % 26];
        else if (s[i] == 'Z') s[i] = rotor3[(25 + balance3) % 26];

        balance3 = balance3 + 1;
    }
    return s;
}

string walzen::rotr2(string s, char b){
    int balance2 = (int)(b - 'A');
    for(int i = 0; i < s.size(); i++){
        if (s[i] == 'A') s[i] = rotor2[(0 + balance2) % 26];
        else if (s[i] == 'B') s[i] = rotor2[(1 + balance2) % 26];
        else if (s[i] == 'C') s[i] = rotor2[(2 + balance2) % 26];
        else if (s[i] == 'D') s[i] = rotor2[(3 + balance2) % 26];
        else if (s[i] == 'E') s[i] = rotor2[(4 + balance2) % 26];
        else if (s[i] == 'F') s[i] = rotor2[(5 + balance2) % 26];
        else if (s[i] == 'G') s[i] = rotor2[(6 + balance2) % 26];
        else if (s[i] == 'H') s[i] = rotor2[(7 + balance2) % 26];
        else if (s[i] == 'I') s[i] = rotor2[(8 + balance2) % 26];
        else if (s[i] == 'J') s[i] = rotor2[(9 + balance2) % 26];
        else if (s[i] == 'K') s[i] = rotor2[(10 + balance2) % 26];
        else if (s[i] == 'L') s[i] = rotor2[(11 + balance2) % 26];
        else if (s[i] == 'M') s[i] = rotor2[(12 + balance2) % 26];
        else if (s[i] == 'N') s[i] = rotor2[(13 + balance2) % 26];
        else if (s[i] == 'O') s[i] = rotor2[(14 + balance2) % 26];
        else if (s[i] == 'P') s[i] = rotor2[(15 + balance2) % 26];
        else if (s[i] == 'Q') s[i] = rotor2[(16 + balance2) % 26];
        else if (s[i] == 'R') s[i] = rotor2[(17 + balance2) % 26];
        else if (s[i] == 'S') s[i] = rotor2[(18 + balance2) % 26];
        else if (s[i] == 'T') s[i] = rotor2[(19 + balance2) % 26];
        else if (s[i] == 'U') s[i] = rotor2[(20 + balance2) % 26];
        else if (s[i] == 'V') s[i] = rotor2[(21 + balance2) % 26];
        else if (s[i] == 'W') s[i] = rotor2[(22 + balance2) % 26];
        else if (s[i] == 'X') s[i] = rotor2[(23 + balance2) % 26];
        else if (s[i] == 'Y') s[i] = rotor2[(24 + balance2) % 26];
        else if (s[i] == 'Z') s[i] = rotor2[(25 + balance2) % 26];

        if(i > 0 && i % 26 == 26 - 1) balance2 = balance2 + 1;
    }
    return s;
}

string walzen::rotr1(string s, char a){
    int balance1 = (int)(a - 'A');
    for(int i = 0; i < s.size(); i++){
        if (s[i] == 'A') s[i] = rotor1[(0 + balance1) % 26];
        else if (s[i] == 'B') s[i] = rotor1[(1 + balance1) % 26];
        else if (s[i] == 'C') s[i] = rotor1[(2 + balance1) % 26];
        else if (s[i] == 'D') s[i] = rotor1[(3 + balance1) % 26];
        else if (s[i] == 'E') s[i] = rotor1[(4 + balance1) % 26];
        else if (s[i] == 'F') s[i] = rotor1[(5 + balance1) % 26];
        else if (s[i] == 'G') s[i] = rotor1[(6 + balance1) % 26];
        else if (s[i] == 'H') s[i] = rotor1[(7 + balance1) % 26];
        else if (s[i] == 'I') s[i] = rotor1[(8 + balance1) % 26];
        else if (s[i] == 'J') s[i] = rotor1[(9 + balance1) % 26];
        else if (s[i] == 'K') s[i] = rotor1[(10 + balance1) % 26];
        else if (s[i] == 'L') s[i] = rotor1[(11 + balance1) % 26];
        else if (s[i] == 'M') s[i] = rotor1[(12 + balance1) % 26];
        else if (s[i] == 'N') s[i] = rotor1[(13 + balance1) % 26];
        else if (s[i] == 'O') s[i] = rotor1[(14 + balance1) % 26];
        else if (s[i] == 'P') s[i] = rotor1[(15 + balance1) % 26];
        else if (s[i] == 'Q') s[i] = rotor1[(16 + balance1) % 26];
        else if (s[i] == 'R') s[i] = rotor1[(17 + balance1) % 26];
        else if (s[i] == 'S') s[i] = rotor1[(18 + balance1) % 26];
        else if (s[i] == 'T') s[i] = rotor1[(19 + balance1) % 26];
        else if (s[i] == 'U') s[i] = rotor1[(20 + balance1) % 26];
        else if (s[i] == 'V') s[i] = rotor1[(21 + balance1) % 26];
        else if (s[i] == 'W') s[i] = rotor1[(22 + balance1) % 26];
        else if (s[i] == 'X') s[i] = rotor1[(23 + balance1) % 26];
        else if (s[i] == 'Y') s[i] = rotor1[(24 + balance1) % 26];
        else if (s[i] == 'Z') s[i] = rotor1[(25 + balance1) % 26];

        if(i > 0 && i % (26 * 26) == 26 * 26 - 1) balance1 = balance1 + 1;
    }
    return s;
}

string walzen::reflected(string s, char reflector){
    if (reflector == 'A'){
        for(int i = 0; i < s.size(); i++){
            s[i] = reflectorA[i%26];
        }
    }
    else if(reflector == 'B'){
        for(int i = 0; i < s.size(); i++){
            s[i] = reflectorB[i%26];
        }
    }
    return s;
}

string walzen::rotorEncryption(string s, char a, char b, char c, char reflector){

    s = rotr3(s, c);
    s = rotr2(s, b);
    s = rotr1(s, a);
    s = reflected(s, reflector);

    return s;
}

string walzen::rotorDecryption(string s, char a, char b, char c){
    return s;
}