#include <iostream>

int main()
{
	setlocale(LC_ALL, "pt_BR.utf-8");
	// setlocale(LC_ALL, "pt_BR.UTF-8"); Para poder usar acentos e caracteres especiais do português-BR
	float Numero01, Numero02, Numero03;
	float Resultado;
	float Media;

	std::cout << "Digite o Primeiro número: ";
	std::cin >> Numero01;
	std::cout << "Digite o Segundo número: ";
	std::cin >> Numero02;
	std::cout << "Digite o Terceiro número: ";
	std::cin >> Numero03;

	std::cout << "Números Digitados: " << Numero01 << " " << Numero02 << " " << Numero03;

	Resultado = Numero01 + Numero02 + Numero03;
	// Calcular a soma dos Números

	Media = Resultado / 3;
	// Calcular a média (Soma dividida pela quantidade de números)

	std::cout << "\nSoma: " << Resultado;
	std::cout << "\nMédia: " << Media;

	std::cout << "\n Precione Enter para sair...\n";
	std::cin.get();
	return 0;
}