
#include <iostream>
#include <string>

int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        std::cout << line << std::endl;
        std::cerr << "DEBUG: " << line << std::endl;
    }
    return 0;
}
