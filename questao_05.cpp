#include <iostream>

int main()
{
    int i;
    int n[5];
    int soma = 0;         // variável para somar os valores

    for(i = 0; i < 5; i++){
        std::cout << "Adicione o " << i << " numero: ";
        std::cin >> n[i];
        soma += n[i];     // acumula a soma
    }

    std::cout << "\nN = [ ";
    for(i = 0; i < 5; i++){
        std::cout << n[i] << " ";
    }
    std::cout << "]\n";

    double media = soma / 5.0;  // média aritmética

    std::cout << "Soma total = " << soma << std::endl;
    std::cout << "Media aritmetica = " << media << std::endl;

    return 0;
}
