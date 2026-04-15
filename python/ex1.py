import numpy as np

# Dados de entrada
dps_torres = np.array([12.5, 80.0, 45.2, 105.4, 64.9, 150.0, 30.0])

# Escreva seu código aqui:
torres_fortes = dps_torres[dps_torres >= 65]

quantidade = torres_fortes.size

print("DPS das torres aprovadas: ", torres_fortes)
print("Quantidade de torres aprovadas: ", quantidade)