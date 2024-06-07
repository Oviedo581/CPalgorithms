def op1(a, b):
    return a + b

def op2(a, b):
    return a * b

def op3(a, b):
    return a ** b

def op4(a, b):
    return a - b

funciones = [op1, op2, op3, op4]

# Listas de argumentos
a_values = [1, 2, 3]
b_values = [4, 5, 6]

# Usar map para aplicar cada función a los argumentos correspondientes
resultados = list(map(lambda f, a, b: f(a, b), funciones, a_values, b_values))

# Imprimir los resultados
print(resultados)