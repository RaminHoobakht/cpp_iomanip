#include <iomanip>
#include <iostream>


int main() {

    double p{3.14159};

    std::cout << std::setprecision(5) << "setprecision(5)      : " << p << '\n';
    std::cout << std::setprecision(9) << "setprecision(9)      : " << p << '\n';
    std::cout << std::setprecision(2) << "setprecision(2)      : " << p << '\n';
    std::cout << std::fixed;
    std::cout << std::setprecision(5) << "fixed setprecision(5): " << p << '\n';
    std::cout << std::setprecision(9) << "fixed setprecision(9): " << p << '\n';
    std::cout << std::setprecision(2) << "fixed setprecision(2): " << p << '\n';

    std::cout << "\n #(07:02:53): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
