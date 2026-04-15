import numpy as np

# Matriz 2D: 4 experimentos (linhas) x 3 testes (colunas)
resultados_lab = np.array([
    [85, 90, 78],
    [92, 88, 95],
    [76, 85, 80],
    [98, 92, 89]
])

# Escreva seu código aqui:

media_experimentos = np.mean(resultados_lab, axis = 1)
print("Média de cada experimento: ")
print(media_experimentos)

totais_teste = np.sum(resultados_lab, axis = 0)
print("Total de cada teste (A, B e C)")
print(totais_teste)

maior_pontuacao = np.max(totais_teste)
print("Maior pontuação alcançada:")
print(maior_pontuacao)

posicao_vencedora = np.argmax(totais_teste)
nome_dos_testes = ["Teste A", "Teste B", "Teste C"]
nome_vencedor = nome_dos_testes[posicao_vencedora]

print(f"O teste com maior pontuação foi o {nome_vencedor}, com {maior_pontuacao} pontos.")