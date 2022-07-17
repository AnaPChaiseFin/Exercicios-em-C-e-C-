#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;



typedef int MeuInt;

typedef struct pessoa{

    string nome, sobrenome;

}TPessoa;

typedef struct data{

    int dia, mes, ano;

}TData;

typedef struct endereco{

    string logradouro, bairro, municipio;
    int n, cep;

}TEndereco;


int main (){

    setlocale(LC_ALL, "");
    int cont;

    TPessoa p[2];
    p[0].nome = "Ana";
    p[0].sobrenome = "Banana";
    TData d[2];
    d[0].dia = 18;
    d[0].mes = 1;
    d[0].ano = 1980;
    TEndereco e[2];
    e[0].logradouro = "Aracaju";
    e[0].bairro = "Lagoas";
    e[0].municipio = "Lagoa";
    e[0].n = 10;
    e[0].cep = 88505260;


    p[1].nome = "Barto";
    p[1].sobrenome = "Banana";
    d[1].dia = 24;
    d[1].mes = 7;
    d[1].ano = 1960;
    e[1].logradouro = "Caju";
    e[1].bairro = "Lago";
    e[1].municipio = "Lagos";
    e[1].n = 30;
    e[1].cep = 77505260;


    if(d[0].ano > d[1].ano){

    }else if(d[0].ano < d[1].ano){

    }else {
        if(d[0].mes > d[1].mes){

        }else if(d[0].mes < d[1].mes){

        }else {
            if(d[0].dia > d[1].dia){

            }else if(d[0].dia < d[1].dia){

            }
        }
    }
    for(cont = 0; cont < 2; cont ++){
        cout << "Nome completo: " << p[cont].nome << " " << p[cont].sobrenome << ".\n";
        cout << "Data Nascimento: " << d[cont].dia << "/" << d[cont].mes << "/" << d[cont].ano << ".\n";
        cout << "Rua: " << e[cont].logradouro << " - n: " << e[cont].n << ", Bairro: " << e[cont].bairro << ".\n";
        cout << "Município: " << e[cont].municipio << " - " << e[cont].cep << ".\n";
    }


    return 0;

}
