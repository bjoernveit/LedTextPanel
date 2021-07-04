#ifndef TEXT_DISPLAY_H
#define TEXT_DISPLAY_H

#include <stdint.h>
#include <string>
#include <vector>
#include "BitCharacter.h"
#include "CharacterService.h"

using namespace std;


class TextDisplay {
private:
    int LETTER_SPACING = 1;
    vector<vector<int8_t>*> bits;
    bool done;

public:
    TextDisplay(string text){
        CharacterService bitCharService;
        for(char c: text){
            BitCharacter* bitChar = bitCharService.getBitCharacterFor(c);
            for(vector<int8_t> row: (*(*bitChar).getRepresentation())){
                bits.push_back(&row);
            }

            vector<int8_t> blankRow(8,0);
            bits.insert(bits.end(), LETTER_SPACING, &blankRow);
        };
    };
    vector<vector<int8_t>*>* getBits() { return &bits; };
    bool isDone(){ return done; };
    int getLength() { return bits.size(); };
};

#endif