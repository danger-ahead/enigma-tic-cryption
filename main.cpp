#include <bits/stdc++.h>
using namespace std;

#include "steckerbrett.h"
#include "walzen.h"

string text, rotor_setter, plugboard1, plugboard2, rot1, rot2, rot3;
char l1, l2, l3;
int r1, r2, r3;

steckerbrett sb;
walzen w;

void plugBoardConfig(){
    //plugboard configurations
    sb.input();
    plugboard1 = sb.s, plugboard2 = sb.s2;
    cout<<"\n";
}

void initialRotorPos(){
    //initial rotor letter position
    do{
        cout<<"***ringstellung*** : ";
        cin>>l1>>l2>>l3;
        cout<<"\n";
    }while((int)l1<65||(int)l1>90 || (int)l2<65||(int)l2>90 || (int)l3<65||(int)l3>90);
}

void rotorType(){
    //type of rotor to be used
    do{
        cout<<"\n***walzenlage*** : ";
        cin>>r1>>r2>>r3;
        cout<<"\n";
    }while(r1<1||r1>6 || r2<1||r2>6 || r3<1||r3>6);
    w.rotorChecker(r1, r2, r3);
    rot1 = w.rotor1, rot2 = w.rotor2, rot3 = w.rotor3;
}

int main(){
    while(true){
        cout << "encryption(e)\tdecryption(d)\tend(q)\n\n";

        string option; cin >> option;

        if (option == "e" || option == "encryption"){
            rotorType();
            initialRotorPos();
            plugBoardConfig();
            
            //rotor setter
            cout<<"***kenngruppen*** : ";
            cin>>rotor_setter;
            cout<<"\n";
            rotor_setter = sb.changed(rotor_setter, plugboard1, plugboard2);
        }

        else if (option == "d" || option == "decryption"){

        }

        else if (option == "q" || option == "end"){
            return 0;
        }

        else{
            cout<<"***input error***\n";
        }
    }
}
