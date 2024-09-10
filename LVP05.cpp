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

    // Método para verificar se o candidato foi aprovado
    bool verificarAprovacao() const {
        return (pontos == MAX_PONTOS && idade > idadeMinima);
    }

    // Método para impressão do contrato
    void imprimirContrato(double salario, const string& contratante) const {
        cout << "Contrato de Trabalho\n";
        cout << "Nome do usuário a ser cadastrado: " << nome << "\n";
        cout << "Insira o CPF: " << cpf << "\n";
        cout << "Insira sua Idade: " << idade << "\n";
        cout << "Salário: " << fixed << setprecision(2) << salario << "\n";
        cout << "Contratante: " << contratante << "\n";
    }

    // Método para verificar se o usuário acertou a resposta e atualizar a pontuação
    void verificarResposta(int pergunta, int respostaUsuario) {
         
        // Gabarito: 1 - Verdadeiro, 2 - Falso
        int gabaritoFinal[4] = {2, 2, 1, 1}; // Respostas do gabarito
        if (pergunta >= 1 && pergunta <= 4) {
            if (respostaUsuario == gabaritoFinal[pergunta - 1]) {
                pontos += 25;
            }
        }
    }

    // Método para retornar o valor dos pontos obtidos
    int getPontuacao() const {
        return pontos;
    }
};

