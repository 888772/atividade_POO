#include <iostream>


int main()
{
    int i;
    int n[5];
    for(i=0; i<5; i++){
        std::cout << "Adicione " << i << " numero" << std::endl;
        std::cin >> n[i];
        std::cout << "number add success" << std::endl;
    }

    std::cout << "N = [";
    for(i=0; i<5; i++){
        std::cout << n[i] << " ";
    }
    std::cout << "]";
    return 0;
}
