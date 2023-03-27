#include "Test_zadan.h"


int main() {
    CppUnit::TextUi::TestRunner runner;

    runner.addTest(new CppUnit::TestCaller<Test_zadan>("zadanie 1", &Test_zadan::zadanie1_test));
    runner.addTest(new CppUnit::TestCaller<Test_zadan>("zadanie 2", &Test_zadan::zadanie2_test));
    runner.addTest(new CppUnit::TestCaller<Test_zadan>("zadanie 3", &Test_zadan::zadanie3_test));

    runner.run();


    return 0;
}
