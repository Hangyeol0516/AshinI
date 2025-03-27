#include <iostream>

int main() {

    int n;
    std::cin >> n;

    char arr[102];
    std::cin >> arr;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (int)arr[i] - 64;
    }

    std::cout << sum;

    return 0;
}