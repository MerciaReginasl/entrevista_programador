#include <iostream>
#include <iomanip> // Para fixed e setprecision
#include <ctime>   // Para time
#include <cstdlib> // Para srand e rand
#include <string>

class Selecionador {
private:
    std::string nome;
    std::string cpf;
    int idade;
    int pontos;
    static const int MAX_PONTOS = 100;
    static const int idadeMinima = 22;

public:
    // Construtor
    Selecionador(const std::string& n, const std::string& c, int i)
        : nome(n), cpf(c), idade(i), pontos(0) {}

    // Método para verificar se o candidato foi aprovado
    bool verificarAprovacao() const {
        return (pontos == MAX_PONTOS && idade > idadeMinima);
    }

    // Método para impressão do contrato
    void imprimirContrato(double salario, const std::string& contratante) const {
        std::cout << "Contrato de Trabalho\n";
        std::cout << "Nome: " << nome << "\n";
        std::cout << "CPF: " << cpf << "\n";
        std::cout << "Idade: " << idade << "\n";
        std::cout << "Salário: " << std::fixed << std::setprecision(2) << salario << "\n";
        std::cout << "Contratante: " << contratante << "\n";
    }

    // Método para verificar se o usuário acertou a resposta e atualizar a pontuação
    void verificarResposta(int pergunta, int respostaUsuario) {
        // Gabarito: 1 - Verdadeiro, 2 - Falso
        int gabarito[4] = {2, 2, 1, 1}; // Respostas do gabarito
        if (pergunta >= 1 && pergunta <= 4) {
            if (respostaUsuario == gabarito[pergunta - 1]) {
                pontos += 25;
            }
        }
    }

    // Método para retornar o valor dos pontos obtidos
    int getPontos() const {
        return pontos;
    }
};

int main() {
    std::string nome, cpf;
    int idade;
    
    // Coletar informações do usuário
    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);
    std::cout << "Digite seu CPF: ";
    std::getline(std::cin, cpf);
    std::cout << "Digite sua idade: ";
    std::cin >> idade;
    
    Selecionador candidato(nome, cpf, idade);

    int resposta;
    // Perguntas e respostas
    for (int i = 1; i <= 4; ++i) {
        std::cout << "Pergunta " << i << ": ";
        switch (i) {
            case 1:
                std::cout << "A estrutura Union pode atribuir e armazenar mais de um valor a um atributo por execução (1 - Verdadeiro, 2 - Falso)? ";
                break;
            case 2:
                std::cout << "Ao determinarmos o comando 'cout<<fixed<<setprecision(2)<<endl' estamos arredondando um valor de float para inteiro (1 - Verdadeiro, 2 - Falso)? ";
                break;
            case 3:
                std::cout << "Usando a biblioteca ctime podemos gerar um número aleatório a partir da função srand(time(0)) (1 - Verdadeiro, 2 - Falso)? ";
                break;
            case 4:
                std::cout << "Podemos utilizar estruturas como classes, struct e union em programação orientada a objeto (1 - Verdadeiro, 2 - Falso)? ";
                break;
        }
        std::cin >> resposta;
        candidato.verificarResposta(i, resposta);
    }

    // Verificar se o candidato foi aprovado
    if (candidato.verificarAprovacao()) {
        std::cout << "Parabéns! Você foi aprovado.\n";
        // Exemplo de impressão do contrato
        double salario = 5000.00; // Salário fictício
        std::string contratante = "Empresa XYZ";
        candidato.imprimirContrato(salario, contratante);
    } else {
        std::cout << "Infelizmente, você não foi aprovado.\n";
    }

    return 0;
}
