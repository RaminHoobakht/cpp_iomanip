#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>


int main() {

    using std::chrono::system_clock;
    std::time_t my_time{system_clock::to_time_t(system_clock::now())};
    std::tm *my_local_time{std::localtime(&my_time)};

    std::cout << "Current time is: ";
    std::cout << std::put_time(my_local_time, "%c");
    std::cout << '\n';


    std::cout << "\n #(08:37:12): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
