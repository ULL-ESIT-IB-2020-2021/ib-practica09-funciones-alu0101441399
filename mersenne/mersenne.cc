#include <iostream>
#include <cmath>
#include "functions_mersenne.h"

int main(int argc, char* argv[]){
    int num;
    std::string parameter;

    if(argc != 2){
        std::cout << "Falta un número natural como parámetro. Pruebe 'mersenne --help' para más información." << std::endl;
    }

    else{
        parameter = argv[1];
        if (parameter == "--help"){
            std::cout << "A este programa le pasamos un número entero y nos calcula un número entero primo a través de la fórmula de mersenne." << std::endl;
        }
    
        else{

            num = atoi(argv[1]);

            for(int i = 1; i <= num; i++){
                std::cout << pow(2,contador(i)) - 1 << std::endl;
            }
        }
    }

    return 0;

}
