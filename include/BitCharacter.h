#ifndef BIT_CHARACTER_H
#define BIT_CHARACTER_H
#include <stdint.h>
#include <vector>
#include <stdexcept>

class BitCharacter {
private:
    char character;
    std::vector<std::vector<int8_t>>* representation;
public:
    BitCharacter(){};
    BitCharacter(char c, std::vector<std::vector<int8_t>>* rep){
        character = c;
        representation = rep;
    };

    std::vector<std::vector<int8_t>>* getRepresentation(){
        return representation;
    };
};
 
#endif