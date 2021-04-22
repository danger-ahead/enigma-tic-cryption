#define _GLIBCXX_USE_CXX11_ABI 0
#include <bits/stdc++.h>
using namespace std;

#include "steckerbrett.h"

string text, plugBoard, changed_text;
char r1, r2, r3;

int main(){
    while(true){
        text = "";
        plugBoard = "ABCDEFGHIJKLM";
        changed_text = "";

        cout << "encryption(e)\tdecryption(d)\tend(q)\n\n";

        steckerbrett sb;  

        string option; cin >> option;

        if (option == "e" || option == "encryption"){

            plugBoard = sb.input(plugBoard);
            cout<<"\n";

            cout<<"text : ";
            cin>>text;
            cout<<"\n";
            changed_text = sb.changed(text, plugBoard);

            do{
                cout<<"***configure***\tROTOR 1 : ";
                cin>>r1;
                cout<<"***configure***\tROTOR 2 : ";
                cin>>r2;
                cout<<"***configure***\tROTOR 3 : ";
                cin>>r3;
            }while((int)r1<65||(int)r1>90 || (int)r2<65||(int)r2>90 || (int)r3<65||(int)r3>90);
 
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
