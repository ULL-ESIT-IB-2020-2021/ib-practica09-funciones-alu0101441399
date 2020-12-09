#include <iostream>
#include <string>
#include "find_first.h"

int main(int argc, char*argv[]){
    std::string palabra, caracter;
    palabra = argv[1];
    caracter = argv[2];

    std::cout << coincidencia(palabra, caracter) << std::endl;
}