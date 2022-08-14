#include <iostream>
#include <bitset>

bool is_even(int num) {
    std::bitset<1> first_bit (num);
    return first_bit.test(0) == 0;
}

int main() {
    int num = 150;
    std::cout << (is_even(num) ? "Is even" : "Isn't even");
}
