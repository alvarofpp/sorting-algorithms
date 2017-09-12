#ifndef __SORT_H__
#define __SORT_H__

#include <iostream>     // std::cout
#include <iterator>     // std::ostream_iterator
#include <vector>       // std::vector

void print_array ( std::vector< int > _vetor );

/*
* Sorting functions
*/
void bubble_sort ( std::vector< int > & _vetor );

#endif /* __SORT_H__ */