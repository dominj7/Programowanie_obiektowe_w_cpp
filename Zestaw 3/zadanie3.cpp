#include <iostream>

using namespace std;


// szablon podstawowy
template <typename T, int N = 100>
class Stack {
public:
    Stack() {
        cout<<"T, N = 100"<<endl;
    }
};


// specjalizacje czesciowe
template <typename T>
class Stack<T, 666> {
public:
    Stack() {
        cout<<"T, 666"<<endl;
    }
};

template <typename T, int N>
class Stack<T*, N> {
public:
    Stack() {
        cout<<"T*, N"<<endl;
    }
};

template <int N>
class Stack<double, N> {
public:
    Stack() {
        cout<<"double, N"<<endl;
    }
};

template <int N>
class Stack<int*, N> {
public:
    Stack() {
        cout<<"int*, N"<<endl;
    }
};

template <>
class Stack<double, 666> {
public:
    Stack() {
        cout<<"double, 666"<<endl;
    }
};

template <>
class Stack<double*, 44> {
public:
    Stack() {
        cout<<"double*, 44"<<endl;
    }
};



int main() {
    Stack<int, -2> stack_0;
    Stack<int, 666> stack_1;
    Stack<float*, 8> stack_2;
    Stack<double, -10>  stack_3;
    Stack<int*, 0> stack_4;
    Stack<double, 666> stack_5; // bardzeij wyspecjalizowana niz 3
    Stack<double*, 44> stack_6;

    return 0;
}
