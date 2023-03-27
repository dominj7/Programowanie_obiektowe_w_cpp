#include <vector>
#include <list>

// zadanie 3
template <class Iterator, class C>
C accumulate(Iterator, Iterator);


// zadanie 4
template<typename T>
class SequenceGen {
private:
    T _start;
    T _step;
public:
    SequenceGen(T, T);
    T operator() ();
};