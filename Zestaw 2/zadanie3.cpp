#include "zadania.h"

template <class Iterator, class C>
C accumulate(Iterator first, Iterator last) {
    C result = (C)0;
    for (; first != last; ++first)
        result += *first;

    return result;
}


template int accumulate(std::vector<int>::iterator, std::vector<int>::iterator);
template float accumulate(std::vector<float>::iterator, std::vector<float>::iterator);
template double accumulate(std::vector<double>::iterator, std::vector<double>::iterator);
template int accumulate(std::list<int>::iterator, std::list<int>::iterator);
template float accumulate(std::list<float>::iterator, std::list<float>::iterator);
template double accumulate(std::list<double>::iterator, std::list<double>::iterator);
