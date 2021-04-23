#include <string>
using namespace std;

class walzen{
public:
    char r1, r2, r3;
    string rotor1, rotor2, rotor3;
    
    void rotorSetter(string token, char c1, char c2, char c3);
    void rotorChecker(int a, int b, int c);
};