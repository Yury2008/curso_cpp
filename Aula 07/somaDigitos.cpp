#include <iostream>
 
int somaDigitos(int numero){

    if (numero < 1){

        return 0;

    }

    return (numero % 10) + somaDigitos(numero / 10);

}

int main(){

    int n, resultado;

    std::cout << "Digite um numero: ";

    std::cin >> n;

    resultado = somaDigitos(n);

    std::cout << resultado;

    return 0;

}

 