dados = {
    'RS':{
        'capital':'PORTO ALEGRE',
        'populacao':11466630
    },
    'SC':{
        'capital':'FLORIANOPOLIS',
        'populacao':7338473
    },
    'PR':{
        'capital':'CURITIBA',
        'populacao': 11597484
    }
}

for estado in dados.keys():
    print(dados[estado])

for estado in dados.keys():
    print(f'A populacao de {estado} é {dados[estado]["populacao"]}')