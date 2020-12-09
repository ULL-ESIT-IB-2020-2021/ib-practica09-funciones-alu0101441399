#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <cmath>

int main (int argc, char* argv[]) {
    int lim_inf, lim_sup, tam, suma = 0, max_num, min_num;
    double media, producto = 1.00;
    srand(time(NULL));

    if(argc != 4){
        std::cout << "Introduzca tres valores separados" << std::endl;
    }
    else{
        tam = atoi(argv[1]);
        lim_sup = atoi(argv[3]);
        lim_inf = atoi(argv[2]);

        std::vector<int> vector(tam);

        for(int i = 0; i < tam; i++){
            vector[i] = lim_inf + rand() % (lim_sup +1 - lim_inf);
            std::cout << vector[i] << std::endl;
        }
        
        for(int i = 0; i < tam ; i++){
            suma += vector[i];
        }
        media = (double)suma/(double)tam;

        for(int i = 0; i < tam; i++){
            producto *= vector[i];
        }

        max_num = vector[0];
        min_num = vector[0];
        for(int i = 0; i < tam; i++){

            if(vector[i] > max_num){
                max_num = vector[i];
            }
            if(vector[i] < min_num){
                min_num = vector[i];
            }   
        }

        std::cout << "Suma = " << suma << std::endl;
        std::cout << "Producto = " << producto << std::endl;
        std::cout << "Valor máximo = " << max_num << std::endl;
        std::cout << "Valor mínimo = " << min_num << std::endl;
        std::cout << "Media = " << media << std::endl;
    }
    return 0;
}