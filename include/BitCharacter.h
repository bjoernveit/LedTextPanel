#ifndef BIT_CHARACTER_H
#define BIT_CHARACTER_H
#include <stdint.h>
#include <vector>
#include <stdexcept>
using namespace std;

class BitCharacter {
private:
    char character;
    vector<vector<int8_t>>* representation;
public:
    BitCharacter(){};
    BitCharacter(char c, vector<vector<int8_t>>* rep){
        character = c;
        representation = rep;
    };

    vector<vector<int8_t>>* getRepresentation(){
        return representation;
    };
};
 
#endif