#include <iostream>
#include <string>
#include "find_first.h"

int coincidencia(std::string word, std::string character){
    for (int i = 0; i < word.size(); i++){
        if(word[i] == character[0]){
            return i;
        }
    }
    return -1;
}