#include <iostream>
#include <string>
#include <cmath>


int main()
{
    std::string s_dia_arch;
    std::string s_deg_arch = "90";

    float deg_arch;
    float dia_arch;
    float len_arch;


    std::cout << "EQUIVALENT ARCH LENGTH\n";
    std::cout << "**********************\n";
    std::cout << "Type 'exit' to return.\n";
    std::cout << "Type 'new' to enter new arch angle (deg).\n";
    std::cout << "**********************\n\n";

    while (true) {
       
        std::cout << "Arch degrees: " << s_deg_arch << "\n";

        std::cout << "Arch diameter: ";
        std::cin >> s_dia_arch;
        
        if (s_dia_arch == "exit") {
            std::cout << "Exiting...";
            break;
        }

        else if (s_dia_arch == "new") {
            std::cout << "New arch diameter: ";
            std::cin >> s_deg_arch;
            std::cout << "\n";
            continue;   
        }

        try {
            dia_arch = std::stof(s_dia_arch);
            deg_arch = std::stof(s_deg_arch);
        }

        catch (...) {
            std::cout << "ERROR\n";
            dia_arch = 0.0;
            deg_arch = 0.0;
        }
        
        
        len_arch = (deg_arch / 360.0) * 2 * acos(0.0) * (dia_arch / 2.0);
        std::cout << "Equivalent length of arch is: ";
        std::cout << len_arch;
        std::cout << "\n\n";

    }
}

