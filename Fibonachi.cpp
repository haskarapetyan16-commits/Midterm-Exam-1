#include <iostream>
using std::cout;

template <int K>
int fibonacci_seq() {
    return fibonacci_seq<K-1>() + fibonacci_seq<K-2>();
}

template <>
int fibonacci_seq<1>() {
    return 1;
}

template <>
int fibonacci_seq<0>() {
    return 1;
}

int main() {
    int result = fibonacci_seq<5>();
    cout << result << "\n";
}
