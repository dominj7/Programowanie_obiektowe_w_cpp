#include "zadania.h"

template <typename T>
T maksimum(T first, T second) {
    return (first > second) ? first : second;
}


// konkretyzacja jawna:
template int maksimum(int, int);
template double maksimum(double, double);
template char const* maksimum(char const*, char const*);
template std::string maksimum(std::string, std::string);
