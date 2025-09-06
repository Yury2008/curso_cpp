#include <iostream>
using namespace std;

void bubbleSort(int arr[], int ordenacao) {
    for (int i = 0; i < ordenacao - 1; i++) {
        for (int j = 0; j < ordenacao - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortInv(int arr[], int ordenacao) {
    for (int i = 0; i < ordenacao - 1; i++) {
        for (int j = 0; j < ordenacao - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[11];
    int ordenacao;

    std::cout << "Informe o padrão de ordenação: ";
    std::cin >> ordenacao;
    
    if(ordenacao < 0 || ordenacao > 10)
    {
        std::cout << "Ordenação cancelada";
    }
    
    else if(ordenacao % 2 != 0)
    {    
        for(int i = 0; i < ordenacao; i++)
        {
            std::cout << "Informe o " << i + 1 << "º número: ";
            std::cin >> numeros[i];
        }
        
        bubbleSort(numeros, ordenacao);
        
        cout << "Array ordenado: ";
        for (int i = 0; i < ordenacao; i++) {
            cout << numeros[i] << " ";
        }
    cout << endl;
    }
    
    else
    {
        for(int i = 0; i < ordenacao; i++)
        {
            std::cout << "Informe o " << i + 1 << "º número: ";
            std::cin >> numeros[i];
        }
        
        bubbleSortInv(numeros, ordenacao);
        
        cout << "Array ordenado: ";
        for (int i = 0; i < ordenacao; i++) {
            cout << numeros[i] << " ";
        }
    cout << endl;
    }
    return 0;
}