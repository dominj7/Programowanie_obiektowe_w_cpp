#include <iostream>
#include <vector>

using namespace std;


// szablon podstawowy
template<typename T,int N = 100, typename R = T*> class Stack;

template<typename T,int N> class Stack<T, N, T*> {
public:
    Stack() {
        cout<<"array"<<endl;
    }
};

template<typename T, int N, template<typename E> class C>
class Stack<T, N, C<T> > {
public:
    Stack() {
        cout<<"container"<<endl;
    }
};


int main() {
    Stack<int, 100> s_default ;
    Stack<int, 0, vector<int> > s_container;

    return 0;
}
