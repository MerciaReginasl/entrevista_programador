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
    
    // Coletar informações do usuário
    cout << "Vamos iniciar o seu cadastro solicitando algumas informações: ";
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
                cout << "A estrutura Union pode atribuir e armazenar mais de um valor a um atributo por execução (1 - Verdadeiro, 2 - Falso)? ";
                break;
            case 2:
                cout << "Ao determinarmos o comando 'cout<<fixed<<setprecision(2)<<endl' estamos arredondando um valor de float para inteiro (1 - Verdadeiro, 2 - Falso)? ";
                break;
            case 3:
                cout << "Usando a biblioteca ctime podemos gerar um número aleatório a partir da função srand(time(0)) (1 - Verdadeiro, 2 - Falso)? ";
                break;
            case 4:
                cout << "Podemos utilizar estruturas como classes, struct e union em programação orientada a objeto (1 - Verdadeiro, 2 - Falso)? ";
                break;
        }
        cin >> resposta;
        candidato.verificarResposta(i, resposta);
    }

    // Verificar se o candidato foi aprovado
    if (candidato.verificarAprovacao()) {
        cout << "Excelente! Você foi aprovado(a).\n";
        // Exemplo de impressão do contrato
        double salario = 6500.00; // Salário fictício
        string contratante = "Empresa Engenharia do code";
        candidato.imprimirContrato(salario, contratante);
    } else {
        cout << "Infelizmente, não foi dessa vez! Mas não desista!!!.\n";
    }

    return 0;
}
