#include <bits/stdc++.h>
using namespace std;

#include "steckerbrett.h"
#include "rotor.h"

string text, changed_text, plugboard1, plugboard2;
char r1, r2, r3, l1, l2, l3;

int main(){
    while(true){
        text = "";
        changed_text = "";

        cout << "encryption(e)\tdecryption(d)\tend(q)\n\n";

        steckerbrett sb;
        //rotor r;

        string option; cin >> option;

        if (option == "e" || option == "encryption"){

            //type of rotor to be used
            do{
                cout<<"***walzenlage*** : ";
                cin>>r1>>r2>>r3;
                cout<<"\n";
            }while((int)r1<65||(int)r1>90 || (int)r2<65||(int)r2>90 || (int)r3<65||(int)r3>90);

            //rotor letter position
            do{
                cout<<"***ringstellung*** : ";
                cin>>l1>>l2>>l3;
                cout<<"\n";
            }while((int)r1<65||(int)r1>90 || (int)r2<65||(int)r2>90 || (int)r3<65||(int)r3>90);

            sb.input();
            plugboard1 = sb.s;
            plugboard2 = sb.s2;
            cout<<"\n";

            //rotor setter
            cout<<"***kenngruppen*** : ";
            cin>>text;
            cout<<"\n";
            changed_text = sb.changed(text, plugboard1, plugboard2);

            // changed_text = r.rotor1(r1, changed_text);
            // changed_text = r.rotor2(r2, changed_text);
            // changed_text = r.rotor3(r3, changed_text);
 
            cout<<changed_text<<endl;
            //encry_decry(text);
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
