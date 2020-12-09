#include <iostream>
#include <cmath>
#include "functions_mersenne.h"

int contador(int numero){
    int cont = 0, primo = 2;
    while(cont < numero){
        for(int i = 2; i <= primo; i++){
            if (primo % i == 0){
                if(i == primo){
                    cont++;
                }
                else{
                    i = primo;
                }
            }
        }
        primo++;
    }
    return primo - 1;
}