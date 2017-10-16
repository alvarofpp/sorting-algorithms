# Ler arquivo CSV original
data = pd.read_csv('/var/www/aulas/edb/sort/test/tests.csv', sep=';')
# Agrupa os dados pela ordem de algoritmos, numero de elementos no vector e cada caso, nessa ordem
# Realiza-se uma media e depois transforma em um dataframe
dt = data.groupby(['algoritmo', 'n_elementos', 'caso'])['tempo'].mean().to_frame()
# Exporta os dados para um novo arquivo csv
dt.to_csv('tests_out.csv', sep=';')