#ifndef CHARACTER_SERVICE_H
#define CHARACTER_SERVICE_H

#include <map>
#include "BitCharacter.h"


class CharacterService {
private:
    std::map<char, BitCharacter*> characterMap;
public:
    CharacterService();
    BitCharacter* getBitCharacterFor(char c);
};

#endif