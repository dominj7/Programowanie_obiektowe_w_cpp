#include "Test_zadan.h"

using namespace std;


int main() {
    CppUnit::TextUi::TestRunner runner;

    runner.addTest(new CppUnit::TestCaller<Test_zadan>("zadanie 3", &Test_zadan::zadanie3_test));
    runner.addTest(new CppUnit::TestCaller<Test_zadan>("zadanie 4", &Test_zadan::zadanie4_test));

    runner.run();


    return 0;
}
