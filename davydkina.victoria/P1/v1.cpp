#include <iostream>

int main()
{
    int prev;
    int curr;
    int c = 0;

    std::cin >> prev;

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
    std::cout << c;
    return 0;
} 
