#include "zadania.h"

template <size_t N, typename T>
T dot_product(std::vector<T> first, std::vector<T> second) {
    T result = 0;
    for (size_t i = 0; i < N; ++i) {
        result += first[i] * second[i];
    }

    return result;
}


// konkretyzacja jawna:
template int dot_product<vectorLength>(std::vector<int>, std::vector<int>);
template double dot_product<vectorLength>(std::vector<double>, std::vector<double>);
