import numpy as np

# Matriz 2D: 4 Bloons (linhas). Coluna 0 = Eixo X, Coluna 1 = Eixo Y
posicoes_moabs = np.array([
    [3, 4],   # MOAB 1
    [6, 8],   # MOAB 2
    [0, 5],   # MOAB 3
    [12, 5]   # MOAB 4
])

# Escreva seu código aqui:

# d = x² + y²
eixo_x = posicoes_moabs[:, 0]
eixo_y = posicoes_moabs[:, 1]
distancia = np.sqrt(eixo_x**2 + eixo_y**2)

print("---RADAR---")
for i, d in enumerate(distancia):
    print(f"Alvo MOAB {i+1}: detectado a {d:.2f} unidades macaco de área da vila macaco.")
