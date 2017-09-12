#include "sort.h"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
	int vetor[] = { 5, 4, 8, 7, 1, 3 };
	print_array( std::begin(vetor), std::end(vetor) );

	int size_array = bubble_sort( std::begin(vetor), std::end(vetor) );
	cout << "Length array: " << size_array << endl;
	
	print_array( std::begin(vetor), std::end(vetor) );

    return 0;
}
