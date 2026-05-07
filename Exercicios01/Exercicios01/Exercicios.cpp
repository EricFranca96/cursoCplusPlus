#include <iostream>
/*Crie um programa em C++ que:
Declara uma variavel do tipo int de nome NumComputadores
Declara uma variável do tipo int de nome SerialComputadores
Inicia a variável NumComputadores com o valor 100;
Inicia a variável SerilComputadores com o valor 11111
Coloca na tela uma linha com cifrões $$$$$$$$$$$$
Coloca na tela o nome e os valores das variáveis NumComputadores e SerialComputadores
Coloca no final da terla uma linha com cifrões $$$$$$$$$$$
Obs: lembre-se de colocar o comando para Pausar a Tela
*/
int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");
	//Para traduzir para o portugues-BR utiliza * setlocale(LC_ALL, "pt_BR.UTF-8"); *

	int NumComputadores = 100;
	//Cira um local na memória do tipo inteiro (int) de nome NumComputadores e inicia com o valor 100
	int SerialComputadores = 11111;
	//Cira um local na memória do tipo inteiro (int) de nome SerialComputadores e inicia com o valor 11111

	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << "\n";
	std::cout << "Valor de NumComputadores = " << NumComputadores << "\n";
	std::cout << "Valor de SerialComputadores = " << SerialComputadores << "\n";
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << "\n";
	//Coloca na tela o que quer que apareça na tela do Terminal



	system("PAUSE");
	return 0; 
}