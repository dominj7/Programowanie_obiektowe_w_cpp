#include <iostream>
#include <set>

using namespace std;

template <typename T>
void printSet(set<T, greater<T>>);


int main() {
    set<double, greater<double>> s;
    s.insert(2.41);
    s.insert(-4);
    s.insert(3.14);

    printSet(s);

    return 0;
}


template <typename T>
void printSet(set<T, greater<T>> s) {
    for (auto item : s)
        cout<<item<<endl;
}
