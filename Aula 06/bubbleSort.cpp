#include <iostream>
using namespace std;

void bubbleSort(int arr[]) {
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[5];

    for(int i = 0; i < 5; i++)
    {
        std::cout << "Informe o " << i + 1 << "º número: ";
        std::cin >> numeros[i];
    }

    bubbleSort(numeros);

    cout << "Array ordenado: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}