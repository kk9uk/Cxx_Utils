#ifndef INPUT_HXX
#define INPUT_HXX

#include <iostream>
#include <limits>

namespace INPUT
{
    inline void clear_any_extraneous_input() {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
    inline int get_user_exactly_input_an_int() {
        while (true) {
            int val{};
            std::cout << "Please input an integer: ";
            std::cin >> val;
    
            // Check for failed extraction
            if (!std::cin) // If the previous extraction failed
            {
                if (std::cin.eof()) // If the stream was closed
                {
                    std::cout << "Why would you CLOSE the stream?\n";
                    exit(1); // Shut down the program now
                }
    
                // Let's handle the failure
                std::cin.clear(); // Put us back in 'normal' operation mode
                clear_any_extraneous_input();
    
                std::cout << "C'mon, you know that's NOT what we want!\n";
                continue;
            }
    
            // If there is extraneous input, treat as failure case
            if (!std::cin.eof() && std::cin.peek() != '\n')
            {
                std::cout << "EXACTLY ONE! Nothing more.\n";
                clear_any_extraneous_input();
                continue;
            }
    
            return val;
        }
    }
}

#endif
