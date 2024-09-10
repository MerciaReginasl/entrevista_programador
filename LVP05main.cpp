#include "SELECIONARCANDIDATO_HPP"

#include <iostream>
#include <iomanip> 
#include <ctime>   
#include <cstdlib> 
#include <string>

using namespace std;

int main() {
    string nome, cpf;
    int idade;
    
    // Coletar informa��es do usu�rio
    cout << "Vamos iniciar o seu cadastro solicitando algumas informa��es: ";
    cout << "Digite seu nome: ";
    getline(cin, nome);
    cout << "Digite seu CPF: ";
    getline(cin, cpf);
    cout << "Digite sua idade: ";
    cin >> idade;
    
    Entrevistador (nome, cpf, idade);

    int resposta;
    // Perguntas e respostas
    for (int i = 1; i <= 4; ++i) {
        cout << "Pergunta " << i << ": ";
        switch (i) {
            case 1:
                cout << "A estrutura Union pode atribuir e armazenar mais de um valor a um atributo por execu��o (1 - Verdadeiro, 2 - Falso)? ";
                break;
            case 2:
                cout << "Ao determinarmos o comando 'cout<<fixed<<setprecision(2)<<endl' estamos arredondando um valor de float para inteiro (1 - Verdadeiro, 2 - Falso)? ";
                break;
            case 3:
                cout << "Usando a biblioteca ctime podemos gerar um n�mero aleat�rio a partir da fun��o srand(time(0)) (1 - Verdadeiro, 2 - Falso)? ";
                break;
            case 4:
                cout << "Podemos utilizar estruturas como classes, struct e union em programa��o orientada a objeto (1 - Verdadeiro, 2 - Falso)? ";
                break;
        }
        cin >> resposta;
        candidato.verificarResposta(i, resposta);
    }

    // Verificar se o candidato foi aprovado
    if (candidato.verificarAprovacao()) {
        cout << "Excelente! Voc� foi aprovado(a).\n";
        // Exemplo de impress�o do contrato
        double salario = 6500.00; // Sal�rio fict�cio
        string contratante = "Empresa Engenharia do code";
        candidato.imprimirContrato(salario, contratante);
    } else {
        cout << "Infelizmente, n�o foi dessa vez! Mas n�o desista!!!.\n";
    }

    return 0;
}
