#include "history.hpp"
#include <iostream>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char* end;
    history short_term(strtol(argv[1], &end, 10));
    history long_term(strtol(argv[2], &end, 10));
    double tick;
    for (;;)
    {
        std::cin >> tick;
        long_term.add_tick(tick);
        short_term.add_tick(tick);
        if (long_term.is_full())
        {
            std::cout << (short_term.get_average() > long_term.get_average()) << std::endl;
        }
    }

}