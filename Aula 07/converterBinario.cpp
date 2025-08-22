#include <iostream>

void converterBinario(int numero)
{
    if(numero == 0) return;

    std::cout << numero % 2;
    converterBinario(numero / 2);
}

int main()
{
    int n;

    std::cout << "Informe o número na base decimal: ";
    std::cin >> n;
    converterBinario(n);
}