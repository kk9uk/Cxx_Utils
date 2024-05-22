#include "Timer.hxx"
#include "Constants.hxx"
#include "Random.hxx"
#include "Input.hxx"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    Timer timer;
    std::cout << Random::get(CONSTANTS::ZERO, INPUT::get_user_exactly_input_an_int()) << '\n';
    std::cout << "Time taken: " << timer.elapsed() << " seconds\n";

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
