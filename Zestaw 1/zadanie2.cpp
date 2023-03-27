#include "zadania.h"

template <typename T, typename U>
T convert(U arg) {
    return static_cast<T>(arg);
}


// konkretyzacja jawna:
template int convert(double);
template double convert(int);
