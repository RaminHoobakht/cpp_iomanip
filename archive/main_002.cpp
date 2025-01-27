#include <iostream>
#include <iomanip>


int main() {

    std::cout << std::hex;
    std::cout << std::setiosflags(std::ios::showbase | std::ios::uppercase);
    std::cout << 100 << '\n';
    std::cout << std::resetiosflags(std::ios::showbase | std::ios::uppercase);
    std::cout << 100 << '\n';

    std::cout << "\n #(06:36:22): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
