

#include <iostream>

int main()
{
    bool flag = false;
    int32_t x;
    std::cin >> x;
    while (x != 0) {
        if (x % 10 == 7)
            flag = true;
        x = x / 10;
    }
    std::cout << flag;
}

