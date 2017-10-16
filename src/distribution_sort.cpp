#include "sort.h"

void radix_sort ( vector<int> & _vetor, int _left = 0, int _right = 0 )
{
    // Vetor temporário para realizar a ordenação
    vector<int> temp[10];
    // Pega o maior elemento do vetor, logicamente é o que contêm maior quantidade de digitos
    int max = *( max_element ( std::begin(_vetor), std::end(_vetor) ) );
    // Essa variável irá nos ajudar a percorrer cada digito dos números presentes no vetor
    int n = 1;

    while (n <= max)
    {
        // Percorremos o vetor
        for(auto v : _vetor)
        {
            // Pegamos o digito que estamos verificando
            int lsd = (v/n)%10;
            // Adicionamos ele a seu respectivo lugar no vetor temporário
            temp[lsd].emplace_back(v);
        }

        int k = 0;
        // Percorremos o vetor temporário (que agr será uma espécie de matriz)
        for (auto &v: temp)
        { 
            // Se não existir nenhum elemento nessa parte do vetor, pulamos ela
            if (v.size() <= 0)
                continue;
            // Caso exista, iremos percorrer os elementos registrados aqui
            for (auto num: v)
                // Passamos os elementos agora organizados para o vetor original
                _vetor[k++] = num;

            v.clear();
        }
        // Multiplicamos por 10 para que no cálculo do 'lsd', estejamos verificando o próximo digito
        n *= 10;
    }
}