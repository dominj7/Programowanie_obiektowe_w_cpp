#include <cstring>
#include <vector>
#include "Test_zadan.h"

void Test_zadan::zadanie1_test() {
    CPPUNIT_ASSERT_EQUAL(2, maksimum(2, 1));
    CPPUNIT_ASSERT_EQUAL(0, maksimum(0, -211));
    CPPUNIT_ASSERT_EQUAL(3.14, maksimum(0.2, 3.14));
    CPPUNIT_ASSERT_EQUAL(0.001, maksimum(0.001, -2.0));
    CPPUNIT_ASSERT(strcmp("Kamil", maksimum("Kamil", "Ślimak")) == 0);
    CPPUNIT_ASSERT(strcmp("aaaaa", maksimum("aaaaa", "b")) == 0);
}


void Test_zadan::zadanie2_test() {
    CPPUNIT_ASSERT_EQUAL(3, convert<int>(3.14));
    CPPUNIT_ASSERT_EQUAL(21, convert<int>(21.99));
    CPPUNIT_ASSERT_EQUAL(3.0, convert<double>(3));
    CPPUNIT_ASSERT_EQUAL(21.0, convert<double>(21));
}


void Test_zadan::zadanie3_test() {
    std::vector<int> v1;
    v1.push_back(2);
    v1.push_back(54);
    v1.push_back(-3);
    std::vector<int> v2;
    v2.push_back(42);
    v2.push_back(543);
    v2.push_back(8);
    std::vector<double> v3;
    v3.push_back(4.0);
    v3.push_back(0.01);
    v3.push_back(-3.98);
    std::vector<double> v4;
    v4.push_back(1.4);
    v4.push_back(543);
    v4.push_back(0.9);

    CPPUNIT_ASSERT_EQUAL(29382, dot_product<vectorLength>(v1, v2));
    CPPUNIT_ASSERT_DOUBLES_EQUAL(7.5, dot_product<vectorLength>(v3, v4), 0.1);
}
