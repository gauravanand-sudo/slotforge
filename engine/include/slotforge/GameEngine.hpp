#pragma once

#include <vector>
#include <random>

namespace slotforge {

struct SpinResult {
    std::vector<int> reels;
    int payout;
};

class GameEngine {
public:
    explicit GameEngine(int seed);
    SpinResult spin();

private:
    std::mt19937 rng_;
};

}