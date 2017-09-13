#include "sort.h"       // Algoritmos de ordenação
#include "test_files.h" // Testes
#include <iostream>     // std::cout, std::endl
#include <ctime>        // srand, rand
#include <array>        // std::array
#include <vector>       // std::vector
#include <chrono>       // std::chrono
#include <fstream>      // std::ofstream

int main(int argc, char * argv[])
{
	std::ofstream file;
	file.open( DIR_TEST + "tests.csv" );
	file << "algoritmo;numero_elementos;tempo" << std::endl ;

	srand( ( unsigned ) time( 0 ) );
	std::vector<int> vetor;
	auto start_total = std::chrono::steady_clock::now();

	for (size_t num = 1; num <= QTDE_TESTES; num++)
	{
		vetor.resize(num);
		for (size_t i = 0; i < num; i++)
			vetor[i] = rand() % QTDE_TESTES;

		for (size_t fun = 0; fun < NUM_FUN; fun++)
		{
			auto start = std::chrono::steady_clock::now();
			switch (fun)
			{
				case INSERTION_SORT: insertion_sort( vetor ); break;
				case SELECTION_SORT: selection_sort( vetor ); break;
				case QUICKSORT: quicksort( vetor, 0, num-1 ); break;
				case BUBBLE_SORT: bubble_sort( vetor ); break;
			}
			auto end = std::chrono::steady_clock::now();
			auto diff = (end - start);
			file << fun << ";";
			file << num << ";";
			file << std::chrono::duration <double, std::milli> (diff).count() << std::endl;
		}
	}

	auto end_total = std::chrono::steady_clock::now();
	auto diff_total = end_total - start_total;

	file.close();

	std::cout << "Tempo total: " << std::chrono::duration <double, std::ratio<1>> (diff_total).count() << std::endl;

    return EXIT_SUCCESS;
}