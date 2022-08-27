#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "Hello\n";

    if (argc >= 3)
    {
        std::cout << "3 args or more\n";
    }

    for (auto i = 0; i < argc; ++i)
    {
        std::cout << "arg " << i << ": " << argv[i] << "\n";
    }

    return 0;
}
