#include <iostream>

enum Note:int {
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};

int main() {
    std::string chord;
    std::cin >> chord;
    int result = 0;

    for (int i = 0; i <= chord.length(); i++){

        result |= (1 << (chord[i] - '0' - 1));
    }

    if (result & Note::DO) {
        std::cout << "Do ";
    }
    if (result & Note::RE) {
        std::cout << "Re ";
    }
    if (result & Note::MI) {
        std::cout << "Mi ";
    }
    if (result & Note::FA) {
        std::cout << "Fa ";
    }
    if (result & Note::SOL) {
        std::cout << "Sol ";
    }
    if (result & Note::LA) {
        std::cout << "La ";
    }
    if (result & Note::SI) {
        std::cout << "Si ";
    }

    return 0;
}
