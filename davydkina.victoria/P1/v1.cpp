#include <iostream>

int main()
{
    int prev;
    int curr;
    int c = 0;

    std::cin >> prev;
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
