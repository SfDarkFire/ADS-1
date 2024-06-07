// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    if (value <= 1) {
        return false;
    }
    for (uint64_t i = 2; i <= std::sqrt(value); ++i) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t num = 2;
    for (uint64_t count = 0; count < n; ++num) {
        if (checkPrime(num)) {
            ++count;
        }
    }
    return num - 1;
}

uint64_t nextPrime(uint64_t value) {
    while (true) {
        if (checkPrime(value)) {
            return value;
        }
        ++value;
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    hbound--;
    while (hbound != 0) {
        sum += hbound;
        hbound--;
    }
    return sum;
}
