#include <string>
using namespace std;

class walzen{
public:
    string rotor1, rotor2, rotor3;
    
    string rotorEncryption(string token, char c1, char c2, char c3);
    string rotorDecryption(string token, char c1, char c2, char c3);
    void rotorChecker(int a, int b, int c);
};