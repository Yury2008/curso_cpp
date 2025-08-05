#include <iostream>

int main()
{
    int idade;

    std::cout << "Informe a sua idade: ";
    std::cin >> idade;

    if(idade < 5 || idade > 50) std::cout << "Idade inválida.";
    else if(idade >= 5 && idade <= 7) std::cout << "O nadador se engrada na categoria: Infantil A";
    else if(idade >= 8 && idade <= 10) std::cout << "O nadador se engrada na categoria: Infantil B";
    else if(idade >= 11 && idade <= 13) std::cout << "O nadador se engrada na categoria: Juvenil A";
    else if(idade >= 14 && idade <= 17) std::cout << "O nadador se engrada na categoria: Juvenil B";
    else if(idade >= 18 && idade <= 40) std::cout << "O nadador se engrada na categoria: Adulto";
    else std::cout << "O nadador se engrada na categoria: Master";

    return 0;
}