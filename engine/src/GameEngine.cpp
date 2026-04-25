#include "slotforge/GameEngine.hpp"

namespace slotforge {

GameEngine::GameEngine(int seed) : rng_(seed) {}

SpinResult GameEngine::spin() {
    std::uniform_int_distribution<int> dist(0, 9);
    SpinResult result;
    result.reels = {dist(rng_), dist(rng_), dist(rng_)};

    // simple payout rule: all equal => 10
    if (result.reels[0] == result.reels[1] && result.reels[1] == result.reels[2]) {
        result.payout = 10;
    } else {
        result.payout = 0;
    }

    return result;
}

}