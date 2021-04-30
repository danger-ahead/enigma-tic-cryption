#include <bits/stdc++.h>
using namespace std;

#include "walzen.h"

//original German Rotor windings
string rotorI = "EKMFLGDQVZNTOWYHXUSPAIBRCJ", rotorII = "AJDKSIRUXBLHWTMCQGZNPYFVOE", rotorIII = "BDFHJLCPRTXVZNYEIWGAKMUSQO",
rotorIV = "ESOVPZJAYQUIRHXLNFTGKDCMWB", rotorV = "VZBRGITYUPSDNHLXAWMJQOFECK", rotorVI = "JPGVOUMFYQBENHZRDKASXLICTW";
string original = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int balance1, balance2, balance3;

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
    balance3 = (int)(c - 'A');      //check the lead of the initialised rotor letter from the 1st letter (A)
    int character;
    for(int i = 0; i < s.size(); i++){
        character = (int)(s[i] - 'A');
        s[i] = rotor3[(character + balance3) % 26];

        balance3 = balance3 + 1;
    }
    return s;
}

string walzen::rotr2(string s, char b){
    balance2 = (int)(b - 'A');
    int character;
    for(int i = 0; i < s.size(); i++){
        character = (int)(s[i] - 'A');
        s[i] = rotor2[(character + balance2) % 26];

        if(i > 0 && i % 26 == 26 - 1) balance2 = balance2 + 1;
    }
    return s;
}

string walzen::rotr1(string s, char a){
    int balance1 = (int)(a - 'A');
    int character;
    for(int i = 0; i < s.size(); i++){
        character = (int)(s[i] - 'A');
        s[i] = rotor1[(character + balance1) % 26];

        if(i > 0 && i % (26 * 26) == 26 * 26 - 1) balance1 = balance1 + 1;
    }
    return s;
}

string walzen::reflected(string s, char reflector){
    int character;
    if (reflector == 'A'){
        for(int i = 0; i < s.size(); i++){
            character = (int)(s[i] - 'A');
            s[i] = reflectorA[character];
        }
    }
    else if(reflector == 'B'){
        for(int i = 0; i < s.size(); i++){
            character = (int)(s[i] - 'A');
            s[i] = reflectorB[character];
        }
    }
    return s;
}

string walzen::returnThruRotrs(string s){
    int intindex;
    size_t index;

    for(int i = s.size() - 1; i >= 0; i--){
        index = rotor1.find(s[i]);
        if (index > INT_MAX){
            throw overflow_error("larger than INT_MAX");
        }
        intindex = static_cast<int>(index);
        s[i] = original[(intindex + balance1) % 26];

        if(i > 0 && i % (26 * 26) == 26 * 26 - 1) balance1 = balance1 - 1;
    }

    for(int i = s.size() - 1; i >= 0; i--){
        index = rotor2.find(s[i]);
        if (index > INT_MAX){
            throw overflow_error("larger than INT_MAX");
        }
        intindex = static_cast<int>(index);
        s[i] = original[(intindex + balance2) % 26];

        if(i > 0 && i % 26 == 26 - 1) balance2 = balance2 - 1;
    }

    for(int i = s.size() - 1; i >= 0; i--){
        index = rotor3.find(s[i]);
        if (index > INT_MAX){
            throw overflow_error("larger than INT_MAX");
        }
        intindex = static_cast<int>(index);
        s[i] = original[(intindex + balance3) % 26];

        balance3 = balance3 - 1;
    }

    return s;
}

string walzen::rotorEncryption(string s, char a, char b, char c, char reflector){

    s = rotr3(s, c);
    s = rotr2(s, b);
    s = rotr1(s, a);
    s = reflected(s, reflector);
    s = returnThruRotrs(s);

    return s;
}

string walzen::rotorDecryption(string s, char a, char b, char c){
    return s;
}