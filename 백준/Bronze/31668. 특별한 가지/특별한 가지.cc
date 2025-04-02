#include <iostream>
#include <cstring>

int main() {
    
    int N, M, K;

    std::cin >> N;
    std::cin >> M;
    std::cin >> K;
    
    std::cout << (M / N) * K;

    return 0;
}