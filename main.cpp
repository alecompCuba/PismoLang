#include <iostream>
#include <fstream>
#include <string>

void runFile(const char* path) {
    std::ifstream file(path);
    if (!file) return;
    const std::string src = std::string((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    std::cout << "Source: " << src << std::endl;
}

void runPrompt() {

}

int main(int argc, char *argv[]) {
    if (argc > 2) {
        std::cout << "Usage Piso [script]" << std::endl;
        return -1;
    } else if (argc == 2) {
        std::cout << "Running piso file: " << argv[1] << std::endl;
        runFile(argv[1]);
    } else {
        runPrompt();
    }
    return 0;
}
