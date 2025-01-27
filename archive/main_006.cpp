#include <iomanip>
#include <iostream>


int main() {

    long double price{};
    
    std::cout << "enter the price: ";
    std::cin >> std::get_money(price);

    if (std::cin.fail()) {
        std::cout << "error in get price operation ....\n";
    } else {
        std::cout << "the price you entered is: " << price << '\n';
    }


    std::cout << "\n #(07:13:42): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
