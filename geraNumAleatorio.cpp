#include <iostream>
#include <cstdlib>  // Para geração de números aleatórios
#include <ctime>    // Para inicializar a semente dos números aleatórios

int main() {
    // Inicialize a semente para a geração de números aleatórios
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int numeroAleatorio = std::rand() % 100 + 1;  // Gere um número aleatório entre 1 e 100
    int palpite;
    int tentativas = 0;

    std::cout << "Bem-vindo ao jogo de adivinhação! Tente adivinhar o número entre 1 e 100." << std::endl;

    do {
        std::cout << "Digite seu palpite: ";
        std::cin >> palpite;
        tentativas++;

        if (palpite < numeroAleatorio) {
            std::cout << "Palpite muito baixo. Tente novamente." << std::endl;
        } else if (palpite > numeroAleatorio) {
            std::cout << "Palpite muito alto. Tente novamente." << std::endl;
        } else {
            std::cout << "Parabéns! Você acertou o número " << numeroAleatorio << " em " << tentativas << " tentativas." << std::endl;
        }
    } while (palpite != numeroAleatorio);

    return 0;
}
