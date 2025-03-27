#include <iostream>

int main() {

    int result;
    std::cin >> result;

    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        int n;
        std::cin >> n;
        sum += n;
    }

    std::cout << result - sum;

    return 0;
}