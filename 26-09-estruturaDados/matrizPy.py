import numpy as np
n = [[8,6,7],[3,5,10],[9,2,7]]
notas = np.array(n)

#Média da turma:
mediaturma = notas.mean()
print(f"A média da turma foi: {mediaturma}")

#Media da prova:
mediaprova = notas.mean(axis=0) #0 - coluna
print(f"Média das provas: {mediaprova}")

#Media cada aluno:
mediaaluno = notas.mean(axis=1) #1 - linhas
print(f"Média dos alunos: {mediaaluno}")

#Maior media
alunonotamaior = mediaaluno.argmax()
print(f"O aluno {alunonotamaior} tem a melhor média!")

#Media das provas
provanotamaior = mediaprova.argmax()
print(f"A prova que tem a melhor média é a prova {provanotamaior}")
