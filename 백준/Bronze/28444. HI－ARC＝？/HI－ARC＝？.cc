#include <iostream>
#include <cstring>

int main() {

    int H, I, A, R, C;
    std::cin >> H;
    std::cin >> I;
    std::cin >> A;
    std::cin >> R;
    std::cin >> C;

    std::cout << (H * I) - (A * R * C);
   
    return 0;
}