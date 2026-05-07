#include <iostream>

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");
	// setlocale(LC_ALL, "pt_BR.UTF-8"); Para poder usar acentos e caracteres especiais do português-BR
	int Numero01, Numero02;
	int Resultado;
	std::cout << "Digite o primeiro número: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << "\n";
	std::cout << "Digite o segundo número: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << "\n";
	Resultado = Numero01 + Numero02;
	std::cout << "A soma dos dois numeros: " << Resultado << "\n";




	std::cout << "\n Precione Enter para sair...\n";
	std::cin.get();
	return 0;
}