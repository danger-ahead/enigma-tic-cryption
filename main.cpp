#include <bits/stdc++.h>
using namespace std;

#include "steckerbrett.h"
#include "walzen.h"

string encrypted;
char letter1, letter2, letter3;
int r1, r2, r3;

steckerbrett sb;
walzen w;

void plugBoardConfig(){
    //plugboard configurations
    sb.input();     //inputs swapped letters in plugboard
    cout<<"\n";

    //rotor setter
    cout<<"***text : *** : ";
    cin>>encrypted;    //text to be encrypted
    cout<<"\n";
    encrypted = sb.changed(encrypted);
}

void initialRotorPos(){
    //initial rotor letter position
    do{
        cout<<"***letters for initialising rotors(A-Z) : _ _ _ *** : ";
        cin>>letter1>>letter2>>letter3;
        cout<<"\n";
    }while((int)letter1<65||(int)letter1>90 || (int)letter2<65||(int)letter2>90 || (int)letter3<65||(int)letter3>90);
    //ensures all characters are upper-case characters
}

void rotorType(){
    //type of rotor to be used
    do{
        cout<<"\n***rotor types(1-6) : _ _ _ *** : ";
        cin>>r1>>r2>>r3;
        cout<<"\n";
    }while(r1<1||r1>6 || r2<1||r2>6 || r3<1||r3>6);     //ensures inputs for rotor types are between 1 and 6
    w.rotorChecker(r1, r2, r3);
}

int main(){
    while(true){
        cout << "encryption(e)\tdecryption(d)\tend(q) : ";

        string option; cin >> option;

        if (option == "e" || option == "encryption" || option == "E"){
            rotorType();
            initialRotorPos();
            plugBoardConfig();
            
            encrypted = w.rotorEncryption(encrypted, letter1, letter2, letter3);
            cout<<encrypted<<endl;
        }

        else if (option == "d" || option == "decryption" || option == "D"){
        
        }

        else if (option == "q" || option == "end" || option == "Q"){
            return 0;
        }

        else{
            cout<<"\n***input error***\n";
        }
        sb.s = "", sb.s2 = "";
        w.rotor1 = "", w.rotor2 = "", w.rotor3 = "";
        encrypted = "";
    }
}
