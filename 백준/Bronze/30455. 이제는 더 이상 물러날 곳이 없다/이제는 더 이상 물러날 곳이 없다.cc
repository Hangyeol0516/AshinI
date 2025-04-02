#include <iostream>
#include <cstring>

int main() {
    
    int N;
    std::cin >> N;

    if (N % 2 == 0)
    {
        std::cout << "Duck";
    }
    else {
        std::cout << "Goose";
    }

    return 0;
}