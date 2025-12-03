#include <iostream>

int main()
{
    int i;
    int n[10];
    int escolha;
    int posicao = -1;  // -1 significa "não encontrado"


    for(i = 0; i < 10; i++){
        std::cout << "Adicione o " << i << " numero: ";
        std::cin >> n[i];
    }

    std::cout << "\nEscolha um numero para procurar no vetor: ";
    std::cin >> escolha;


    for(i = 0; i < 10; i++){
        if(n[i] == escolha){
            posicao = i;
            break;
        }
    }

    if(posicao != -1){
        std::cout << "\nO numero " << escolha << " aparece pela primeira vez na posicao " << posicao << "." << std::endl;
    } else {
        std::cout << "\nO numero " << escolha << " NAO esta no vetor." << std::endl;
    }

    std::cout << "\nN = [ ";
    for(i = 0; i < 10; i++){
        std::cout << n[i] << " ";
    }
    std::cout << "]\n";

    return 0;
}
