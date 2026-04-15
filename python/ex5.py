import numpy as np

nomes_torres = np.array(["Macaco Dardo", "Atirador de Elite", "Super Macaco", "Canhão"])
custo = np.array([215, 3500, 25000, 1200])
dps = np.array([5, 80, 450, 40])

# Escreva seu código aqui:
# eficiencia = dps/custo

eficiencia = dps/custo
eficiencia_ranked = np.argsort(eficiencia)

nomes_ordenados= nomes_torres[eficiencia_ranked]

print("O mais eficiente do menor para o maior é: ", nomes_ordenados)