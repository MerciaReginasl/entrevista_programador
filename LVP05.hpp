#ifndef SELECIONARCANDIDATO_HPP // nome da artigo
#define SELECIONARCANDIDATO_HPP


#include <iostream>
#include <iomanip> // Para fixed e setprecision
#include <ctime>   // Para time
#include <cstdlib> // Para srand e rand
#include <string>

using namespace std;

class Selecionador {
private:
    string nome;
    string cpf;
    int idade;
    int pontos;
    
    static const int MAX_PONTOS = 100;
    static const int idadeMinima = 22;
    
public:
        Entrevistador(const string& n, const string& c, int i);
        bool verificarAprovacao();
        void imprimirContrato(double salario, const string& contratante);
        void verificarResposta(int pergunta, int respostaUsuario);
        int getPontuacao();
        
}

#endif
