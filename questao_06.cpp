#include <iostream>

int main()
{
    int i;
    int n[8];
    int maior, menor;
    int posMaior, posMenor;

    for(i = 0; i < 8; i++){
        std::cout << "Adicione o " << i << " numero: ";
        std::cin >> n[i];
    }

    maior = n[0];
    menor = n[0];
    posMaior = 0;
    posMenor = 0;

    for(i = 1; i < 8; i++){
        if(n[i] > maior){
            maior = n[i];
            posMaior = i;
        }
        if(n[i] < menor){
            menor = n[i];
            posMenor = i;
        }
    }

    std::cout << "\nN = [ ";
    for(i = 0; i < 8; i++){
        std::cout << n[i] << " ";
    }
    std::cout << "]\n";

    std::cout << "\nMaior valor = " << maior << " na posicao " << posMaior << std::endl;
    std::cout << "Menor valor = " << menor << " na posicao " << posMenor << std::endl;

    return 0;
}

