   # Avisa o Numpy para formatar todo número float como R$ 0.00
import numpy as np
np.set_printoptions(formatter={'float': lambda x: f"R$ {x:.2f}"})

    # Dados de entrada
capital_investido = np.array([1000, 5000, 2500, 10000, 800])
taxa_rendimento = np.array([0.05, 0.045, 0.052, 0.04, 0.06]) # Ex: 0.05 = 5%

    # Escreva seu código aqui:

lucro_bruto = capital_investido*taxa_rendimento
lucro_liq = lucro_bruto - 15

print("Lucro bruto: ", lucro_bruto)
print("Lucro líquido: ", lucro_liq)