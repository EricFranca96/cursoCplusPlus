#include <iostream>
#include <tchar.h>

int main() 
{
	//Função que configura o console windows para mostrar acentos e caracteres especiais da língua portuguesa, como ç, ã, á, etc.
	setlocale(LC_ALL, "pt_BR.UTF-8");

	//Declaração de variáveis.
	//Primeiro colocamos qual o tipo de variável que desejamos que o computador crie ao executar o nosso programa
	//neste caso escolhemos ambas como int (integer)
	//Ou seja o local da memória que estamos solicitando ao computador
	//deve ser capaz de armazenar números inteiros (-3, -2, -1, 0, 1, 2, 3, etc.)
	//então int NumVidas pode ser lido da seguint forma:
	/*Computador por favor me fornece um local na memória RAM com tamanho suficiente para armazenar um número inteiro e coloque o nome deste local como sendo NumVidas*/
	int NumVidas = 5;
	int Pontuacao = 1350;
	std::cout << "******INICIO DO JOGO******" << std::endl; 
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "Tamanho da Variável NumVidas: " << sizeof(NumVidas) << "\n";
	std::cout << "Tamanho da Variável Pontuacao: " << sizeof(Pontuacao) << "\n";
	std::cout << "Endereço que Nuvidas Ocupa na memória RAM: " << &NumVidas << "\n";
	std::cout << "Endereço que Pontuação Ocupa na memória RAM: " << &Pontuacao << "\n";
	std::cout << "********************************" << std::endl;

	std::cout << "******DURANTE O JOGO******" << std::endl;
	Pontuacao = Pontuacao + 150;
	NumVidas = NumVidas - 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "********************************" << std::endl;



	system("PAUSE");
}