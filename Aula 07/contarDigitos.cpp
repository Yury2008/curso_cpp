#include <iostream>
int contarDigitos(int numero) {
    
    if (numero == 0) 
    {
        return 0;
    }
    
    else 
    {
        return 1 + contarDigitos(numero / 10);
    }
}

int main(){

    int n, resultado;

    std::cout << "Digite um numero: ";

    std::cin >> n;

    resultado = contarDigitos(n);

    std::cout << resultado;

    return 0;

}

 