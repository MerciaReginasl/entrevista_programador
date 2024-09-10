#include "SELECIONARCANDIDATO_HPP"

#include <iostream>
#include <iomanip> 
#include <ctime>   
#include <cstdlib> 
#include <string>

using namespace std;

class Entrevistador {
private:
    string nome;
    string cpf;
    int idade;
    int pontos;
    
    static const int MAX_PONTOS = 100;
    static const int idadeMinima = 22;

public:
    // Construtor
     Entrevistador(const std::string& n, const std::string& c, int i)
        : nome(n), cpf(c), idade(i), pontos(0) {}

    // M�todo para verificar se o candidato foi aprovado
    bool verificarAprovacao() const {
        return (pontos == MAX_PONTOS && idade > idadeMinima);
    }

    // M�todo para impress�o do contrato
    void imprimirContrato(double salario, const string& contratante) const {
        cout << "Contrato de Trabalho\n";
        cout << "Nome do usu�rio a ser cadastrado: " << nome << "\n";
        cout << "Insira o CPF: " << cpf << "\n";
        cout << "Insira sua Idade: " << idade << "\n";
        cout << "Sal�rio: " << fixed << setprecision(2) << salario << "\n";
        cout << "Contratante: " << contratante << "\n";
    }

    // M�todo para verificar se o usu�rio acertou a resposta e atualizar a pontua��o
    void verificarResposta(int pergunta, int respostaUsuario) {
         
        // Gabarito: 1 - Verdadeiro, 2 - Falso
        int gabaritoFinal[4] = {2, 2, 1, 1}; // Respostas do gabarito
        if (pergunta >= 1 && pergunta <= 4) {
            if (respostaUsuario == gabaritoFinal[pergunta - 1]) {
                pontos += 25;
            }
        }
    }

    // M�todo para retornar o valor dos pontos obtidos
    int getPontuacao() const {
        return pontos;
    }
};

