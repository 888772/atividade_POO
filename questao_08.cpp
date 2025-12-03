#include <iostream>
#include <string>

int main()
{
    std::string nomes[6];
    std::string busca;
    bool encontrado = false;

    for(int i = 0; i < 6; i++){
        std::cout << "Digite o nome " << i << ": ";
        std::getline(std::cin, nomes[i]);
    }

    std::cout << "\nDigite um nome para buscar: ";
    std::getline(std::cin, busca);

    for(int i = 0; i < 6; i++){
        if(nomes[i] == busca){
            encontrado = true;
            break;
        }
    }

    if(encontrado){
        std::cout << "\nO nome \"" << busca << "\" existe no vetor.\n";
    } 
    else {
        std::cout << "\nO nome \"" << busca << "\" NAO existe no vetor.\n";
    }

    return 0;
}
