#include <iostream>
#include "slotforge/GameEngine.hpp"

int main(int argc, char** argv) {
    int spins = 1000;
    int seed = 42;

    if (argc > 1) spins = std::stoi(argv[1]);
    if (argc > 2) seed = std::stoi(argv[2]);

    slotforge::GameEngine engine(seed);

    long total = 0;
    for (int i = 0; i < spins; ++i) {
        auto r = engine.spin();
        total += r.payout;
    }

    std::cout << "Spins: " << spins << "\n";
    std::cout << "Total payout: " << total << "\n";
    std::cout << "RTP: " << (double)total / spins << "\n";

    return 0;
}