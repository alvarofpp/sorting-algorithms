#include <ctime>        // srand, rand
#include <array>        // std::array
#include <vector>       // std::vector
#include <chrono>       // std::chrono
#include <fstream>      // std::ofstream
#include <iostream>     // std::cout, std::endl
#include <algorithm>    // std::reverse

#include "sort.h"       // Algoritmos de ordenação
#include "test_files.h" // Testes

// vector
using std::vector;

// iostream
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char * argv[])
{
	std::ofstream file;
	if (TAM_INIT == 2)
	{
		// Cria o arquivo (apaga caso já exista um)
		file.open( DIR_TEST + "tests.csv" );
		// Insere o cabeçalho
		file << "algoritmo;n_elementos;t_aleatorio;t_ordenado;t_invertido" << std::endl;
	}
	else
		// Continua escrevendo no arquivo existente
		file.open( DIR_TEST + "tests.csv", std::ofstream::out | std::ofstream::app );
	
	// Planta a semente do aleatório :v
	srand( ( unsigned ) time( 0 ) );
	// Vetor que será usado
	vector<int> vetor(3, 1);
	// Variável usada para cálcular a média de tempo
	size_t media[3] = { 0, 0, 0 };

	// Analisar o algoritmo
	auto start_total = std::chrono::steady_clock::now();

	// Quantidade de testes
	for (size_t num = TAM_INIT; num <= (QTDE_TESTES+1); num *= 2)
	{
		// Redimensiona o tamanho do vetor
		vetor.resize(num);
		// Insere novos números aleatórios
		for (size_t i = 0; i < num; i++)
			vetor[i] = rand() % num;

		for (size_t fun = 0; fun < NUM_FUN; fun++)
		{
			// Zera a média para novo cálculo
			media[0] = 0.0;
			media[1] = 0.0;
			media[2] = 0.0;
			// Quantidade de testes que serão realizados em cada algoritmo
			for (size_t qtde = 1; qtde <= QTDE_MEDIA; qtde++)
			{
				for (size_t caso = 0; caso < QTDE_CASOS; caso++)
				{
					if (caso == 2)
						// Inverte a ordem do vetor
						std::reverse(vetor.begin(), vetor.end());

					// Tempo inicial 
					auto start = std::chrono::steady_clock::now();
					// Execução do algoritmo
					sorting[fun](vetor, 0, -1);

					// Tempo final
					auto end = std::chrono::steady_clock::now();
					// Diferença do tempo inicial para o final (tempo que demorou)
					auto diff = (end - start);
					// auto diff = (end - start);
					// Cálculo da média progressiva
					media[caso] = media[caso] + ( ((diff.count()) - media[caso])/qtde );
				}
			}
			
			// Salva os dados no arquivo
			file << fun << ";";
			file << num << ";";
			file << media[0] << ";";
			file << media[1] << ";";
			file << media[2] << std::endl;
			/*
			file << std::chrono::duration <double, std::milli> (media[0]).count() << ";";
			file << std::chrono::duration <double, std::milli> (media[1]).count() << ";";
			file << std::chrono::duration <double, std::milli> (media[2]).count() << std::endl;
			*/
		}
	}

	// Analisar o algoritmo
	auto end_total = std::chrono::steady_clock::now();
	auto diff_total = end_total - start_total;

	file.close();

	cout << "Tempo total: " << std::chrono::duration <double, std::milli> (diff_total).count() << endl;

    return EXIT_SUCCESS;
}