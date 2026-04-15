import numpy as np

# Dados: Pierce base das 5 torres (Ex: Ninja, Super Macaco, Dardo, etc.)
pierce_base = np.array([2, 8, 1, 15, 3])

# Escreva seu código aqui usando np.where():

pierce_buffado = np.where(pierce_base < 5, pierce_base + 3, pierce_base + 1)

print("Pierce ANTES do buff: ", pierce_base)
print("Pierce DEPOIS do buff: ", pierce_buffado)
