#include <string>
using namespace std;

class walzen{
public:
    static char r1, r2, r3;
    
    void rotorSetter(string token, char c1, char c2, char c3);
    string rotors(char rot2, string token);
};