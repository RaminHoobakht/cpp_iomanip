#include <iostream>
#include <iomanip>


int main() {

    std::cout << std::setfill('X') << std::setw(17);
    std::cout << 123 << '\n';

    std::cout << "\n #(06:59:28): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
