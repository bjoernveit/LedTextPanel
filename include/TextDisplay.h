#ifndef TEXT_DISPLAY_H
#define TEXT_DISPLAY_H

#include <stdint.h>
#include <string>
#include <vector>
#include "BitCharacter.h"
#include "CharacterService.h"


class TextDisplay {
private:
    int LETTER_SPACING = 1;
    std::vector<std::vector<int8_t>*> bits;
    bool done;

public:
    TextDisplay(std::string text){
        CharacterService bitCharService;
        for(char c: text){
            BitCharacter* bitChar = bitCharService.getBitCharacterFor(c);
            for(std::vector<int8_t> row: (*(*bitChar).getRepresentation())){
                bits.push_back(&row);
            }

            std::vector<int8_t> blankRow(8,0);
            bits.insert(bits.end(), LETTER_SPACING, &blankRow);
        };
    };
    std::vector<std::vector<int8_t>*>* getBits() { return &bits; };
    bool isDone(){ return done; };
    int getLength() { return bits.size(); };
};

#endif