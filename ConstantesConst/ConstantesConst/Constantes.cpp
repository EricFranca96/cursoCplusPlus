#include <iostream>
#include <cstdlib>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    const int NumVidas = 10;
    int TotalDeVidas;
    TotalDeVidas = NumVidas - 1;

    std::cout << "Total de vidas: " << TotalDeVidas << "\n";
    std::cout << "Valor Constante NumVidas: " << NumVidas << "\n";
    std::cout << "Endereço de Memória de NumVidas: " << &NumVidas << "\n";

    std::cout << "\nPressione ENTER para sair...\n";
    std::cin.get();

    return 0;
}