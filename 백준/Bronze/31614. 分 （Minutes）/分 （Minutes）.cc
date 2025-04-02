#include <iostream>
#include <cstring>

int main() {

    int H, M;
    std::cin >> H;
    std::cin >> M;

    std::cout << H * 60 + M;
   
    return 0;
}