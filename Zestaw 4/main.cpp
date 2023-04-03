#include "testy.hpp"


int main() {
    Testy *testy = new Testy;
    CppUnit::TextUi::TestRunner runner;

    runner.addTest(testy);
    runner.run();

    return 0;
}