#include <ctime>
#include <iomanip>
#include <iostream>


int main() {

    struct std::tm when{};

    std::cout << "enter time: ";
    std::cin >> std::get_time(&when, "%R");

    if (std::cin.fail()) {
        std::cout << "error in get time ...\n";
    } else {
        std::cout << "the time you enter is: ";
        std::cout << when.tm_hour << ":";
        std::cout << when.tm_min << ":";
        std::cout << when.tm_sec << '\n';
    }

    std::cout << "\n #(08:08:30): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
