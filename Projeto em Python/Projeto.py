c=0
produtos=[]
dados=[]

#------------------------------------------------------------------------------ CABEÇALHOS
def cb():
    print('-' *80)

def cb0():
    cb()
    print(' ' *30 , ' CONTROLE DE ESTOQUE ' )
    cb()

def cb1():
    cb()
    print(' ' * 30, '  CADASTRAR PRODUTOS  ')
    cb()

def cb2():
    cb()
    print(' ' * 30, '  ENTRADA DE ITENS  ', )
    cb()

def cb3():
    cb()
    print(' ' * 30, '     SAÍDA DE ITENS      ')
    cb()

def cb4():
    cb()
    print(' ' * 30, 'EXIBIR TODOS OS PRODUTOS FABRICADOS')
    cb()

def cb5():
    cb()
    print(' ' * 30, '     CONSULTAR PELO NOME      ')
    cb()

def cb6():
    cb()
    print(' ' * 30, '     PRODUTOS EM FALTA NO ESTOQUE      ')
    cb()

def cb7():
    cb()
    print(' ' * 30, '    MATÉRIA-PRIMA EM FALTA NO ESTOQUE  ')
    cb()

def cb8():
    cb()
    print(' ' * 30, '        SITUAÇÃO FINANCEIRA         ')
    cb()

#------------------------------------------------------------------------------ TABELAS
def t():
    print('nº', ' '*7 , 'nome', ' '*7, 'tipo' , ' '*7 , 'estq', ' '*7, 'min', ' '*7, 'preço')
    for r in range(len(produtos)):
        print( r, end=' '*7)
        for s in range(5):
            print(produtos[r][s], end=' ' * 15)
        print('\n')

def t1():
    print('nº', ' ' * 7, 'nome', ' ' * 7, 'tipo', ' ' * 7, 'estq', ' ' * 7, 'min', ' ' * 7, 'preço' , ' ' * 7, 'preço total ' )
    for r in range(len(produtos)):
        if((produtos[r][1])== 'p' or ((produtos[r][1])=='P') ):
            print(r, end=' ' * 7)
            for s in range(5):
                print(produtos[r][s], end=' ' * 15)
            print((produtos[r][2]) * (produtos[r][4]))
            print('\n')
def t2():
    print('nº', ' ' * 7, 'nome', ' ' * 7, 'estq', ' ' * 7, 'min', ' ' * 7, 'necessário')
    for r in range(len(produtos)):
        if ((produtos[r][1]) == 'p' or ((produtos[r][1]) == 'P')):
            if ((produtos[r][2]) < (produtos[r][3]) ):
                print(r, end=' ' * 7)
                print(produtos[r][0], ' ' * 15 , (produtos[r][2]) , ' ' * 15, produtos[r][3] , ' ' * 15, ((produtos[r][3])-(produtos[r][2])), ' ' * 15)
                print('\n')

def t3():
    print('nº', ' ' * 7, 'nome', ' ' * 7,  'estq', ' ' * 7, 'min', ' ' * 7, 'necessário')
    for r in range(len(produtos)):
        if ((produtos[r][1]) == 'm' or ((produtos[r][1]) == 'M')):
            if ((produtos[r][2]) < (produtos[r][3])):
                print(r, end=' ' * 7)
                print(produtos[r][0], ' ' * 15, (produtos[r][2]), ' ' * 15, produtos[r][3], ' ' * 15,
                      ((produtos[r][3]) - (produtos[r][2])), ' ' * 15)
                print('\n')


#------------------------------------------------------------------------------ MENUS DE OPÇÕES
def m1():
    while(c==0):
        cb1()
        c1=str(input('Deseja ralizar cadastro? [S/N] \n'))
        if(c1=='s' or c1=='S'):
            nome = str(input('Digite o nome do produto \n'))
            tipo = str(input('Digite o tipo do produto [M/P] \n'))
            estoq = int(input('Digite a quantidade em estoque \n'))
            estoqmin = int(input('Digite a quantidade mínima aconselhavel em estoque \n '))
            prec = float(input('Digite o preço unitário \n'))
            dados.append(nome)
            dados.append(tipo)
            dados.append(estoq)
            dados.append(estoqmin)
            dados.append(prec)
            produtos.append(dados[:])
            dados.clear()
        elif(c1=='n' or c1=='N'):
            break
        else:
            print('Deu erro')


def m2():
    while (c == 0):
        cb2()
        t()
        c1 = str(input('Deseja realizar uma entrada no estoque? [S/N] \n'))
        if (c1 == 's' or c1 == 'S'):
            w=int(input('Digite o indice do produto a ser adicionado \n'))
            qtd=int(input('Digite a quantidade a ser adicionada \n'))
            produtos[w][2]= ((produtos[w][2])+qtd)


        elif (c1 == 'n' or c1 == 'N'):
            break
        else:
            print('Deu erro')

def m3():
    while (c == 0):
        cb3()
        t()
        c1 = str(input('Deseja realizar uma saída no estoque? [S/N] \n'))
        if (c1 == 's' or c1 == 'S'):
            w=int(input('Digite o indice do produto a ser retirado \n'))
            qtd=int(input('Digite a quantidade a ser retirada \n'))
            if (qtd<=(produtos[w][2])):
                produtos[w][2]= ((produtos[w][2])-qtd)
            else:
                print('Qantidade desejada maior que a contida no estoque ')
        elif (c1 == 'n' or c1 == 'N'):
            break
        else:
            print('Deu erro')


def m4():
    cb4()
    t1()

def m5():
    cb5()
    j=str(input("Digite o produto que deseja buscar: "))
    print('nº', ' ' * 7, 'nome', ' ' * 7, 'tipo', ' ' * 7, 'estq', ' ' * 7, 'min', ' ' * 7, 'preço')
    for g in range(len(produtos)):
        if j in produtos[g][0]:
            for f in range(5):
                print(produtos[g][f], end=" " * 15)
            print("\n")
    print('Não implementado ainda')

def m6():
    cb6()
    t2()

def m7():
    cb7()
    t3()
def m8():
    cb8()
    soma1 = soma2=0
    for r in range(len(produtos)):
        if (((produtos[r][1]) == 'p') or ((produtos[r][1]) == 'P')):
            soma1+=((produtos[r][2]) * (produtos[r][4]))

        elif (((produtos[r][1]) == 'm') or ((produtos[r][1]) == 'M')):
            soma2+=((produtos[r][2]) * (produtos[r][4]))
    print('O valor gasto com o estoque de matéria prima é RS' , soma2)
    print('O valor total de produtos fabricados é RS' , soma1)
    print('A diferença entre o total entre produtos fabricados e matérias primas é RS', soma1-soma2)
    if (soma2>soma1):
        print('Estoque de materiais maior que o de produtos')
    elif(soma1>soma2):
        print('Estoque de produtos maior que o de materiais')
    else:
        print('Estoque são equivalentes')




#------------------------------------------------------------------------------ PROGRAMA PRINCIPAL
while (c==0):
    cb0()
    chose=str(input("Escolha a operação que deseja efetuar: \n1- Cadastrar novos produtos \n2- Entrada de itens em estoque \n3- Saída de itens do estoque \n4- Exibir todos os produtos fabricados \n5- Consultar pelo nome de um produto fabricado \n6- Produtos fabricados abaixo do estoque mínimo\n7- Matérias-primas que estão abaixo do estoque mínimo\n8- Situação financeira\n0- Encerrar o programa\n"))
    if (chose == '1'):
       m1()
    elif (chose == '2'):
        m2()
    elif (chose == '3'):
        m3()
    elif (chose == '4'):
        m4()
    elif (chose == '5'):
        m5()
    elif (chose == '6'):
        m6()
    elif (chose == '7'):
        m7()
    elif (chose == '8'):
        m8()
    elif (chose == '0'):
        break
    else:
        print('Valor inválido')
