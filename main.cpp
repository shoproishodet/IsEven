#include <iostream>

bool is_even(int num) {
    return !(num & 1);
}

int main() {
    int num = 124032589;
    std::cout << (is_even(num) ? "Is even" : "Is odd");
}
