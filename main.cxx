#include "Timer.hxx"
#include "Constants.hxx"
#include "Random.hxx"
#include "Input.hxx"

// force constexpr execute at compile-time
consteval auto compile_time(auto val) {
    return val;
}

int main() {
    Timer timer;
    std::cout << Random::get(CONSTANTS::ZERO, INPUT::get_user_exactly_input_a_double()) << '\n';
    std::cout << "Time taken: " << timer.elapsed() << " seconds\n";
    return 0;
}
