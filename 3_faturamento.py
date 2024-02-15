'''
    Autor: Milena Bueno Maciel
    Descrição: Segundo os dados contidos no arquivo json, retorna o menor faturamento, o maior faturamento e a quantidade de dias em que o faturamento foi maior do que a média
'''
import json

with open("dados.json") as dados_json:
    dados = json.load(dados_json)

dias = 0
media = 0
menor_faturamento = 100000000
maior_faturamento = 0
valores = []

for i in dados:
    
    if i["valor"]!= 0:
        valores.append(i["valor"]) #armazena cada faturamento diferente de zero
        dias += 1 #conta quantos dias o faturamento foi diferente de zero
        media += i["valor"] #soma todos os faturamentos

        if i["valor"] < menor_faturamento:
            menor_faturamento = i["valor"] #atualiza o valor de menor faturamento
        
        elif i["valor"] > maior_faturamento:
            maior_faturamento = i["valor"] #atualiza o valor de maior faturamento

media = media/dias
valores.sort() #ordena de forma crescente os faturamentos do mês
i = 0
while valores[i] <= media:
    i+=1 #conta quantos faturamentos foram menores ou iguais à media

print("Menor faturamento: ", menor_faturamento)
print("Maior faturamento: ", maior_faturamento)
print("Numero de dias com faturamento superior a media: ", (len(valores)-i)) #A quantidade de dias em que o faturamento foi maior que a média é o tamanho do vetor de faturamentos (o total de dias) menos os dias em que o faturamento foi menor ou igual à média