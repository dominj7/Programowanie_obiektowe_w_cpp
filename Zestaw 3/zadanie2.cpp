#include <iostream>

using namespace std;


template<typename T, typename U>
T convert(U u);

template<>
short convert<short>(int u) {
    return static_cast<short>(u);
}

template<>
double convert<double>(int u) {
    return static_cast<double>(u);
}


int main() {
    cout<<sizeof(convert<short>(4))<<endl;
    cout<<sizeof(convert<double>(4))<<endl;

    return 0;
}