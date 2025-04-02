#include <iostream>
#include <cstring>

int main() {

    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        int A, B, X;
        std::cin >> A;
        std::cin >> B;
        std::cin >> X;
    
        std::cout << (A * (X - 1) + B) << std::endl;
    }

    return 0;
}