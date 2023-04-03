#include <iostream>
#include <cstring>

using namespace std;

template <typename T> T max2(T a, T b);
template <typename T> T *max2(T *a, T *b);
template <typename T> T max2(T *data, size_t n);
template <typename T> const T *max2(T *a, const T *b);

// specjalizacje
template <> char *max2(char *a, char *b) {
    return (strcmp(a, b) > 0) ? a : b;
}

template <> const char *max2(const char *a, const char *b) {
    return (strcmp(a, b) > 0) ? a : b;
}

template <> const char *max2(char *a, const char *b) {
    return (strcmp(a, b) > 0) ? a : b;
}


int main() {
    cout<<max2(4, 1)<<endl;

    int array[3]= {24, 2, 121};
    cout<<max2(array, 3)<<endl;

    cout<<max2("j", "dd")<<endl;

    return 0;
}


template <typename T> T max2(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T> T *max2(T *a, T *b) {
    return ((*a) > (*b)) ? a : b;
}

template <typename T> T max2(T *data, size_t n) {
    T result = data[0];
    for (size_t i = 1; i < n; ++i)
        if (data[i] > result)
            result = data[i];

    return result;
}

template <typename T> const T *max2(T *a, const T *b) {
    return ((*a) > (*b)) ? a : b;
}

