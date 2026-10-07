#include <iostream>

int main()
{
    int prev;
    int curr;
    int c = 0;

    if (!(std::cin >> prev))
    {
        std::cerr << "Error: The input data cannot be identified as a sequence\n";
        return 1;
    }

    if (prev == 0)
    {
        std::cout << 0;
        return 0;
    }

    while (std::cin >> curr && curr!=0)
    {
        if (curr > prev)
        {
            c++;
        }
        prev = curr;
    }

    if (!std::cin.eof() && std::cin.fail())
    {
        std::cerr << "Error: The input data cannot be identified as a sequence\n";
        return 1;
    }

    std::cout << c << "\n";
    return 0;
} 
