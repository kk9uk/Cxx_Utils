#include "Timer.hxx"
#include "Constants.hxx"
#include "Random.hxx"
#include "Input.hxx"
#include "main.hxx"

int main() {
    Timer timer;
    std::cout << Random::get(CONSTANTS::ZERO, INPUT::get_user_exactly_input_a_double()) << '\n';
    std::cout << "Time taken: " << timer.elapsed() << " seconds\n";
    return 0;
}
