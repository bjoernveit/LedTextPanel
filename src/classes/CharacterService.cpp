#include "CharacterService.h"

CharacterService::CharacterService()
{
    std::vector<std::vector<int8_t>> vectA = {
        {0,1,1,1,1,0,0,0},
        {1,0,0,1,0,0,0,0},
        {0,1,1,1,1,0,0,0}
    };

    std::vector<std::vector<int8_t>> vectB = {
        {1,1,1,1,1,0,0,0},
        {1,0,1,0,1,0,0,0},
        {0,1,1,1,0,0,0,0}
    };

    std::vector<std::vector<int8_t>> vectC = {
        {1,1,1,1,1,0,0,0},
        {1,0,0,0,1,0,0,0},
        {1,1,0,1,1,0,0,0}
    };

    std::vector<std::vector<int8_t>> vectD = {
        {1,1,1,1,1,0,0,0},
        {1,0,0,0,1,0,0,0},
        {0,1,1,1,0,0,0,0}
    };

    std::vector<std::vector<int8_t>> vectE = {
            {1,1,1,1,1,0,0,0},
            {1,0,1,0,1,0,0,0},
            {1,0,1,0,1,0,0,0}
    };

    characterMap = { 
        {'A', new BitCharacter('A', &vectA)},
        {'B', new BitCharacter('B', &vectB)},
        {'C', new BitCharacter('C', &vectC)},
        {'D', new BitCharacter('D', &vectD)},
        {'E', new BitCharacter('E', &vectE)}
    };
};

BitCharacter* CharacterService::getBitCharacterFor(char c)
{
    return characterMap[c];
};