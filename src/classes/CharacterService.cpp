#include "CharacterService.h"

CharacterService::CharacterService()
{
    vector<vector<int8_t>> vectA = {
        {0,1,1,1,1,0,0,0},
        {1,0,0,1,0,0,0,0},
        {0,1,1,1,1,0,0,0}
    };

    vector<vector<int8_t>> vectB = {
        {1,1,1,1,1,0,0,0},
        {1,0,1,0,1,0,0,0},
        {0,1,1,1,0,0,0,0}
    };

    vector<vector<int8_t>> vectC = {
        {1,1,1,1,1,0,0,0},
        {1,0,0,0,1,0,0,0},
        {1,1,0,1,1,0,0,0}
    };

    vector<vector<int8_t>> vectD = {
        {1,1,1,1,1,0,0,0},
        {1,0,0,0,1,0,0,0},
        {0,1,1,1,0,0,0,0}
    };

    vector<vector<int8_t>> vectE = {
            {1,1,1,1,1,0,0,0},
            {1,0,1,0,1,0,0,0},
            {1,0,1,0,1,0,0,0}
    };



    characterMap = { 
        {'A', BitCharacter('A', &vectA)},
        {'B', BitCharacter('B', &vectB)},
        {'C', BitCharacter('C', &vectC)},
        {'D', BitCharacter('D', &vectD)},
        {'E', BitCharacter('E', &vectE)}
    };

}

BitCharacter* CharacterService::getBitCharacterFor(char c)
{
    return &characterMap[c];
}