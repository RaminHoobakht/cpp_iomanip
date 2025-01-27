#include <iostream>
#include <iomanip>


int main() {

    std::cout << "The price is: " << std::put_money(123.799L) << '\n';

    std::cout << "\n #(07:37:02): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
