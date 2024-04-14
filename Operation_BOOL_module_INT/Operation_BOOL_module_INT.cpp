

#include <iostream>

int main()
{
    bool flag = false;
    int32_t x;
    int d = 2;
    std::cin >> x;
    while (x != 1) {
        if (x % d == 0) {
            std::cout << d << std::endl;
            x = x / d;
        }
        else {
            d++;
        }
    }
    std::cout << flag;
}

