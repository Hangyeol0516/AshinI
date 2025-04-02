#include <iostream>
#include <cstring>

int main() {

    int A, B;
    std::cin >> A;
    std::cin >> B;

    printf("%d", A >= B ? B : A);

    return 0;
}