#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>

int main() {

    using std::chrono::system_clock;
    std::time_t my_time{system_clock::to_time_t(system_clock::now())};

    std::tm *local_time{std::localtime(&my_time)};
    std::cout << "current time is: " << local_time->tm_hour;
    std::cout << ":";
    std::cout << local_time->tm_min << ":";
    std::cout << local_time->tm_sec << '\n';

    std::cout << "\n #(08:15:51): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
