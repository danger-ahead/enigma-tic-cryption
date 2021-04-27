#include <string>
using namespace std;

class walzen{
public:
    string rotor1, rotor2, rotor3;
    
    string rotorEncryption(string token, char a, char b, char c, char reflector);
    string rotorDecryption(string token, char c1, char c2, char c3);
    void rotorChecker(int a, int b, int c);

    string rotr3(string s, char c);
    string rotr2(string s, char b);
    string rotr1(string s, char a);
    string reflected(string s, char reflector);
};