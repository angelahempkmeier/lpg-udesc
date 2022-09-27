n = []

for i in range(5):
    nota = float(input(f"Digite a {i+1}a nota: "))
    n.append(nota)
max = max(n)
min = min(n)
print(f"Maior: {max} e Menor: {min}")