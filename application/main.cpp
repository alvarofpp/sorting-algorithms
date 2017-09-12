#include "sort.h"
#include <iostream>    // std::cout, std::endl
#include <ctime>       // srand, rand
#include <array>       // std::array
#include <vector>      // std::vector

const int QTDE_TESTES = 10;

int main(int argc, char * argv[])
{
	srand( ( unsigned ) time( 0 ) );
	std::vector<int> vetor;

	for (size_t num = 1; num <= QTDE_TESTES; num++)
	{
		vetor.resize(num);
		for (size_t i = 0; i < num; i++)
			vetor[i] = rand() % QTDE_TESTES;

		print_array( vetor );
		std::cout << " <=-=> ";

		insertion_sort( vetor );

		print_array( vetor );
		std::cout << std::endl;
	}

    return 0;
}
