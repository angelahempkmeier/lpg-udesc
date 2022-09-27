n = []
soma = 0
for i in range(3):
    nota = float(input(f"Digite a nota {i + 1}:"))
    n.append(nota)
media = sum(n)/len(n)
print(f"Media = {media:.2f}")