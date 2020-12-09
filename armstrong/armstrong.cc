#include <iostream>
#include <cmath>

int main(int argc, char* argv[]){
    int num, cifras = 1, suma = 0, a;
    num = atoi(argv[1]);
    a = num;

    while(a/10 > 0){
        cifras++;
        a = a/10;
    }
    a = num;

    for(int i = 0; i < cifras; i++){
        suma += pow(a % 10,cifras);
        a = a/10;
    }

    if(suma == num){
        std::cout << num << " is an Armstrong number. " << std::endl;
    }
    else{
        std::cout << num << " is not an Armstrong number. " << std::endl;
    }

    return 0;
}