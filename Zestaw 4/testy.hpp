#include <cppunit/TestCase.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cstring>
#include "zadania.hpp"


class Testy : public CppUnit::TestCase {
public:
    void runTest() override {
        int ints[] = {2, 4, 5, 1, -2, 1, 53, 49};
        CPPUNIT_ASSERT_EQUAL(113, sum<int>(ints, &ints[8]));
        double doubles[] = {2.42, 4.02, -5.0, 42.99, -20.21, 1.0, -53.004};
        CPPUNIT_ASSERT_DOUBLES_EQUAL(-27.8, sum<double>(doubles, &doubles[7]), 0.1);
        char chars[] = "Ala ma kota";
        CPPUNIT_ASSERT_EQUAL(971, sum<char>(chars, &chars[strlen(chars)]));
        char chars2[] = "(!)";
        CPPUNIT_ASSERT_EQUAL(114, (int)sum<sum_char>(chars2, &chars2[strlen(chars2)]));
        char chars3[] = "@ @ @";
        CPPUNIT_ASSERT_EQUAL(0, (int)sum<sum_char>(chars3, &chars3[strlen(chars3)]));   // poza zakresem ASCII
    }
};