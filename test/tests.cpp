// Copyright Zhatkin Vyacheslav
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(PrimeTest, CheckPrime) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(11));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(100));
}

TEST(PrimeTest, NPrime) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(6), 13);
    EXPECT_EQ(nPrime(10001), 104743);
}

TEST(PrimeTest, NextPrime) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(103), 107);
}

TEST(PrimeTest, SumPrime) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(20), 77);
}
