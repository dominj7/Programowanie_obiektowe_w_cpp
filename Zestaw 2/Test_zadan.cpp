#include <functional>
#include "Test_zadan.h"


void Test_zadan::zadanie3_test() {
    std::vector<int> v1 = {5, 3, 2, -10, 2};
    std::vector<double> v2 = {0.24, 21.0, -42.6432};
    std::list<float> l = {3.14, 2.0, -0.20};

    int i = accumulate<std::vector<int>::iterator, int>(v1.begin(), v1.end());
    CPPUNIT_ASSERT_EQUAL(2, i);
    double d = accumulate<std::vector<double>::iterator, double>(v2.begin(), v2.end());
    CPPUNIT_ASSERT_DOUBLES_EQUAL(-21.5, d, 0.1);
    float f = accumulate<std::list<float>::iterator, float>(l.begin(), l.end());
    CPPUNIT_ASSERT_DOUBLES_EQUAL(4.9, f, 0.05);
}


void Test_zadan::zadanie4_test() {
    std::vector<int> v(20);

    generate_n(v.begin(), v.size(), SequenceGen<int>(1,2));
    std::vector<int>::iterator it = find_if(v.begin(), v.end(), bind(std::greater<int>(), std::placeholders::_1, 4));

    CPPUNIT_ASSERT_EQUAL(5, *it);
}
