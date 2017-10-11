#include "sort.h"

/*
void radix_sort ( vector<int> & _vetor )
{
    vector<int> tmp[10]; //store 0~9;
    int max = *( max_element ( std::begin(_vetor), std::end(_vetor) ) );

    int n = 1;
    while (n <= max)
    {
		for(auto v : _vetor)
		{
            int lsd = (v/n)%10;
            tmp[lsd].emplace_back(v);
        }

        int k = 0;
        for (auto &v: tmp)
        { 
            if (v.size() <=0)
                continue;

            for (auto num: v)
                _vetor[k++] = num;

            v.clear();
        }

        n *= 10;
    }
}
*/