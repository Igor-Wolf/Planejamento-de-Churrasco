/*
FUNÇÃO: O seguinte programa tem a função de apresentar valores para a execução de um churrasco.
Para isso o usuário deve digitar as quantidades de participates e os preços dos produtos, de tal forma
que o programa mostrará o valor que cada pessoa deverá pagar para contribuir com o churrasco.
ALUNOS: Igor Reis Barbosa , Kennedy Junior Oliveira
DATA: 09/06/2018
PROFª: Vânia de Oliveira Borges

*/

//------------------------------------------- BIBLIOTÉCAS
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>


using namespace std;

//------------------------------------------- VARIÁVEIS GLOBAIS
float bebum, santinho, y, tot, pag;
char a, b;
int z, i, e, f;

string p[2]= { "bebem" , "não bembem"};
string title[17]= {"Lata de cerveja           " , "Litro de Refigerante      ", "Litro de Refrigerante Diet " , "Kilo de Carne de Vaca     " , "Kilo de Linguiça Toscana " , "Kilo de Linguiça de Frango " , "Kilo de Limão               " , "Kilo de Tomate               " , "Kilo de Cebola               " , "Unidade de Vinagre      " , "Unidade de Pão               " , "Unidade de Carvão        " , "Unidade de Sal Grosso       " , "Unidade de Detergente        " , "Unidade de Esponja        " , "Unidade de Papel Higiênico " , "Total " };
float precos[16];
float quantidade[16]={6, 0, 0.2, 0.25, 0.05, 0.05, 0.05, 0.05, 0.01, 1, 3, 0.05, 0.02, 1, 1, 0.025};
float comprar[16], precf[17];
//------------------------------------------- FUNÇÕES
//----CABEÇALHOS
void churras(){
cout << "---------------------------------------------------------------------------------------"<< endl;
cout << "                                      CHURRASCO                                        "<< endl;
cout << "---------------------------------------------------------------------------------------"<< endl;

}

void qp(){
cout << "---------------------------------------------------------------------------------------"<< endl;
cout << "                                NÚMERO DE PARTICIPANTES                                "<< endl;
cout << "---------------------------------------------------------------------------------------"<< endl;


}

void preco(){
cout << "---------------------------------------------------------------------------------------"<< endl;
cout << "                                         PREÇOS                                        "<< endl;
cout << "---------------------------------------------------------------------------------------"<< endl;
}

void quant(){
cout << "---------------------------------------------------------------------------------------"<< endl;
cout << "                                     QUANTIDADES                                       "<< endl;
cout << "---------------------------------------------------------------------------------------"<< endl;


}

void total(){
cout << "---------------------------------------------------------------------------------------"<< endl;
cout << "                                         TOTAL                                         "<< endl;
cout << "---------------------------------------------------------------------------------------"<< endl;
}

//---- TABELAS
void pes(){
qp();
cout << "A quantidade de participantes que "<< p[0]<< " é " << bebum << "\n";
cout << "A quantidade de participantes que "<< p[1]<< " é " << santinho << "\n";
cout << "A quantidade total de  participantes é " << bebum+santinho << " \n\n";

}

void prec( ){
preco();

for (z=0 ; z<=15 ; z++){
    cout<< title[z] << "\t";
    cout<< precos[z] << "\t";
    cout<< endl;}
cout<< endl;
cout<< "OBS: Valores em reais \n";
cout << "---------------------------------------------------------------------------------------"<< endl;
}

void tab(){

quant();
cout<< "Produto                      Qtd/pes  Preço   Qtd comp Total\n\n" ;
cout<< title[0] << "\t" << quantidade[0] << "\t"<< precos[0] << "\t" << comprar[0]<< "\t"<< precf[0]<< "\t" << endl;
cout<< title[1] << "\t" << "0* \t" << precos[1] << "\t" << comprar[1]<< "\t" << precf[1] << "\t" << endl;
for (f=2 ; f<=8; f++){
    cout<< title[f] << "\t";
    cout<< quantidade[f]<< "  \t";
    cout<< precos[f]<< "\t";
    cout<< comprar[f]<< "\t";
    cout<< precf[f] << "\t";
    cout<< endl;
    }
cout<< title[9] << "\t" << "1** \t" << precos[9] << "\t" << comprar[9]<< "\t"<< precf[9]<< "\t" << endl;
cout<< title[10] << "\t" << quantidade[10] << "\t"<< precos[10] << "\t" << comprar[10]<< "\t"<< precf[10] << "\t" << endl;
cout<< title[11] << "\t" << quantidade[11] << "\t"<< precos[11] << "\t" << comprar[11]<< "\t"<< precf[11] << "\t" << endl;
cout<< title[12] << "\t" << quantidade[12] << "\t"<< precos[12] << "\t" << comprar[12]<< "\t"<< precf[12] << "\t" << endl;
cout<< title[13] << "\t" << "1** \t" << precos[13] << "\t" << comprar[13]<< "\t"<< precf[13] << "\t" << endl;
cout<< title[14] << "\t" << "1** \t" << precos[14] << "\t" << comprar[14]<< "\t"<< precf[14] << "\t" << endl;
cout<< title[15] << "\t" << quantidade[15] << "\t"<< precos[15] << "\t" << comprar[15] << "\t" << precf[15] << "\t" << endl;
cout<< endl;
cout<<"Total: R$" << precf[16] << endl;

cout<< "* A quantidade de refrigerante é 0.3 litro por participante que bebe,\n mais 1 Litro por participante que não bebe\n** Apenas um por churrasco. \n";
cout << "---------------------------------------------------------------------------------------"<< endl;
cout<< endl;


}

//---- VERIFICAÇÕES

void veri(string x[], int j){
y= -1;
int aux=0;
do{
system("CLS");
pes();
cout << "Digite a quantidade de pessoas que " << x[j]<< " :\n";
cin>> y;
aux=y;

}while(aux!=y || y<0);

}

void veri1(string x[], int j){
y= -1;
do{
system("CLS");
prec();
cout << "Digite o preço por  " << x[j]<< " \n";
cin>> y;

}while( y<0);

}


//------------------------------------------- OPÇÕES DE MENU

void m1(){

  do{
  pes();
  cout<< "Deseja alterar os valores? [s/n] \n";
  cin >> b;
  if (b== 's' || b== 'S'){
  veri(p , 0);
  bebum= y;
  veri(p , 1);
  santinho= y;
  system("CLS");

  }
  system("CLS");

  }while((b!= 'n') && (b!= 'N'));
if (bebum+santinho!=0){
    e= 1;
    //---------------------- QUANTIDADES A SEREM COMPRADAS
comprar[0]= 6*(bebum);//cerveja
comprar[1]= ceil((bebum*0.3)+(santinho*1));//refri
comprar[2]= ceil(0.2*(bebum+santinho));//refri diet
comprar[3]= 0.25*(bebum+santinho);//carne vaca
comprar[4]= 0.05*(bebum+santinho);//lig tosc
comprar[5]= 0.05*(bebum+santinho);//lig frang
comprar[6]= 0.05*(bebum+santinho);//limão
comprar[7]= 0.05*(bebum+santinho);//tomate
comprar[8]= 0.01*(bebum+santinho);//cebola
comprar[9]= 1*e;//vinagre
comprar[10]= 3*(bebum+santinho);//pão
comprar[11]= ceil(0.05*(bebum+santinho));//carvão
comprar[12]= ceil(0.02*(bebum+santinho));//sal grosso
comprar[13]= 1*e;//detergente
comprar[14]= 1*e;//esponja
comprar[15]= ceil(0.025*(bebum+santinho));//papel higienico

    }
else {
    e=0;
}
precf [0]= (comprar[0]*precos[0]);
precf [1]= (comprar[1]*precos[1]);
precf [2]= (comprar[2]*precos[2]);
precf [3]= (comprar[3]*precos[3]);
precf [4]= (comprar[4]*precos[4]);
precf [5]= (comprar[5]*precos[5]);
precf [6]= (comprar[6]*precos[6]);
precf [7]= (comprar[7]*precos[7]);
precf [8]= (comprar[8]*precos[8]);
precf [9]= (comprar[9]*precos[9]);
precf [10]=(comprar[10]*precos[10]);
precf [11]=(comprar[11]*precos[11]);
precf [12]=(comprar[12]*precos[12]);
precf [13]=(comprar[13]*precos[13]);
precf [14]=(comprar[14]*precos[14]);
precf [15]=(comprar[15]*precos[15]);
precf [16]=((precf[0]+precf[1]+precf[2]+precf[3]+precf[4]+precf[5]+precf[6])+precf[7]+precf[8]+precf[9]+precf[10]+precf[11]+precf[12]+precf[13]+precf[14]+precf[15]);


  }

void m2(){
do{
prec();
cout<< "Deseja alterar os valores? [s/n] \n";
cin >> b;
if(b=='s' || b== 'S') {

for (i=0 ; i<=15 ; i++){
veri1(title, i);
precos[i]= y;

}
}
system("CLS");
}while(b!='n' && b!='N');
precf [0]= (comprar[0]*precos[0]);
precf [1]= (comprar[1]*precos[1]);
precf [2]= (comprar[2]*precos[2]);
precf [3]= (comprar[3]*precos[3]);
precf [4]= (comprar[4]*precos[4]);
precf [5]= (comprar[5]*precos[5]);
precf [6]= (comprar[6]*precos[6]);
precf [7]= (comprar[7]*precos[7]);
precf [8]= (comprar[8]*precos[8]);
precf [9]= (comprar[9]*precos[9]);
precf [10]=(comprar[10]*precos[10]);
precf [11]=(comprar[11]*precos[11]);
precf [12]=(comprar[12]*precos[12]);
precf [13]=(comprar[13]*precos[13]);
precf [14]=(comprar[14]*precos[14]);
precf [15]=(comprar[15]*precos[15]);
precf [16]=((precf[0]+precf[1]+precf[2]+precf[3]+precf[4]+precf[5]+precf[6])+precf[7]+precf[8]+precf[9]+precf[10]+precf[11]+precf[12]+precf[13]+precf[14]+precf[15]);

}

void m3(){

tab();

system("pause");
}

void m4(){
total();
if (e==0){
cout<< "Digite o número de participantes primeiro... \n";
system("pause");
}
else {
cout<< "O valor total é R$" << precf[16] << endl;
tot= precf[16]*1.05;
cout<< "O valor total com o extra de 5% é R$" << floorf(tot * 100)/100<< endl;
pag= tot/(bebum+santinho);
cout<< "O valor total bruto por participante seria R$" << floorf(pag * 100)/100 << endl;
cout<< "O valor reajustado por participante que bebe é R$"<< floorf((floorf(tot * 100)/100)/(bebum+(santinho*0.75))*100)/100<< endl;
cout<< "O valor reajustado por participante que não bebe é R$"<< floorf((0.75*(floorf((floorf(tot * 100)/100)/(bebum+(santinho*0.75))*100)/100))*100)/100<< endl;


//cout<< "O valor por participante que bebe é R$" <<floorf((pag*1.25) * 100)/100<< endl;
//cout<< "O valor por participante que não bebe é R$" << floorf((pag*0.75) * 100)/100 << endl;
//cout<< "O valor por participante que bebe é R$" <<floorf((((floorf(tot * 100)/100)-(santinho*(floorf((pag*0.75) * 100)/100)))/bebum)* 100)/100<< endl;
cout<< endl;
system("pause");



}



}

//------------------------------------------- PROGRAMA PRINCIPAL
int main()
{
    setlocale(LC_ALL, "portuguese");
    do{
    system("CLS");
    churras();
    cout<< "DIGITE QUAL A OPÇÃO VOCÊ DESEJA ALTERAR \n";
    cout<< "Qtd. de Participantes [1]  Preços [2]  Tabelas [3]  Total [4]  Sair [5] \n";
    cin>> a;
    if (a== '1'){
    system("CLS");
    m1();
    }
    if (a== '2'){
    system("CLS");
    m2();
    }
    if (a== '3'){
    system("CLS");
    m3();
    }
    if (a== '4'){
    system("CLS");
    m4();
    }


    }while(a!= '5');


    return 0;
}
