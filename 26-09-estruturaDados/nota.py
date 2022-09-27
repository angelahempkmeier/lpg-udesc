from statistics import median


n = []
soma = 0
for i in range(3):
    n += [float(input(f"Digite a nota {i + 1}:"))]
    #nota = (float(input(f"Digite a nota {i + 1}:"))
    #n.append(nota)
    #media = sum(n)/len(n)
    soma += n[i]
media = soma/(i+1)
print(f"Media = {media}")