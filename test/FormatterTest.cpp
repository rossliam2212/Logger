//
// Created by Liam Ross on 10/03/2023.
//

#include <catch2/catch_test_macros.hpp>
#include "../src/Formatter.h"


TEST_CASE("Formatter::formatConsole(const Record& record") {
    logger::Record record{"Info Log", logger::info};

    std::string time{record.getTime().getDateAndTime()};
    std::ostringstream oss;
    oss << white << time << "  INFO   []  Info Log" << white << reset;

    REQUIRE(logger::Formatter::formatConsole(record) == oss.str());
}

TEST_CASE("Formatter::formatFile(const Record& record") {
    logger::Record record{"Debug Log", logger::debug};

    std::string time{record.getTime().getDateAndTime()};
    std::ostringstream oss;
    oss << time << "  DEBUG  []  Debug Log";

    REQUIRE(logger::Formatter::formatFile(record) == oss.str());
}

