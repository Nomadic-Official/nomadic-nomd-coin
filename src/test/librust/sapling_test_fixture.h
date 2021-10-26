// Copyright (c) 2020 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef NOMADIC_SAPLING_TEST_FIXTURE_H
#define NOMADIC_SAPLING_TEST_FIXTURE_H

#include "test/test_nomadic.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //NOMADIC_SAPLING_TEST_FIXTURE_H
