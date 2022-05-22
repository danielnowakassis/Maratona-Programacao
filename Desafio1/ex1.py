
entrada = input()
contents = []
contents.append(entrada)
while True:
    entrada = input()
    if(len(entrada) != 0):
        contents.append(entrada.lower())
    else:
        break

piores = []
fator = 0
for i in range(1, len(contents)):
    element = int(contents[i].split(" ")[-1])
    if i == 1:
        menor = element
    else:
        if(menor > element):
            piores.clear()
            menor = element
            piores.append(contents[i].lower())
            piores.append(i)
            fator = 1
        elif(menor == element):
            piores.append(contents[i].lower())
            piores.append(i)
k = 1
print("Instância " + str(k))
print(contents[piores[-1]])
print()
