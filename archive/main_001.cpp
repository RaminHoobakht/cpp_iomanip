#include <iomanip>
#include <iostream>

int main() {

    std::cout << std::hex;
    std::cout << std::setiosflags(std::ios::showbase | std::ios::uppercase);
    std::cout << 100 << '\n';


    std::cout << "\n #(06:31:32): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
