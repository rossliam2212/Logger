//
// Created by Liam Ross on 10/03/2023.
//

#include <catch2/catch_test_macros.hpp>
#include "../src/Outputter.h"

TEST_CASE("Outputter::getOutputFileName() const") {
    const std::string outputFileName{"logs.txt"};
    logger::Outputter out{"logs"};

    REQUIRE(out.getOutputFileName() == outputFileName);
}

TEST_CASE("Outputter::getOutputFilePath() const") {
    const std::string outputFilePath{"../logs/logs.txt"};
    logger::Outputter out{"logs"};

    REQUIRE(out.getOutputFilePath() == outputFilePath);
}