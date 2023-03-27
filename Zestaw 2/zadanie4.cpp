#include "zadania.h"

template <typename T>
SequenceGen<T>::SequenceGen(T start, T step) : _start(start), _step(step) {};

template <typename T>
T SequenceGen<T>::operator()() {
    T tmp = _start;
    _start+= _step;
    return tmp;
}


template SequenceGen<int>::SequenceGen(int, int);
template int SequenceGen<int>::operator()();
