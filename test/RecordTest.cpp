//
// Created by Liam Ross on 10/03/2023.
//

#include <catch2/catch_test_macros.hpp>
#include "../src/Record.h"

TEST_CASE("Record::getMessage()") {
    logger::Record startRecord{"startRecord", logger::start};
    logger::Record endRecord{"endRecord", logger::end};
    logger::Record infoRecord{"infoRecord", logger::info};
    logger::Record debugRecord{"debugRecord", logger::debug};
    logger::Record warningRecord{"warningRecord", logger::warning};
    logger::Record errorRecord{"errorRecord", logger::error};
    logger::Record fatalRecord{"fatalRecord", logger::fatal};

    REQUIRE(startRecord.getMessage() == "startRecord");
    REQUIRE(endRecord.getMessage() == "endRecord");
    REQUIRE(infoRecord.getMessage() == "infoRecord");
    REQUIRE(debugRecord.getMessage() == "debugRecord");
    REQUIRE(warningRecord.getMessage() == "warningRecord");
    REQUIRE(errorRecord.getMessage() == "errorRecord");
    REQUIRE(fatalRecord.getMessage() == "fatalRecord");
}


TEST_CASE("Record::getSeverity()") {
    logger::Record startRecord{"startRecord", logger::start};
    logger::Record endRecord{"endRecord", logger::end};
    logger::Record infoRecord{"infoRecord", logger::info};
    logger::Record debugRecord{"debugRecord", logger::debug};
    logger::Record warningRecord{"warningRecord", logger::warning};
    logger::Record errorRecord{"errorRecord", logger::error};
    logger::Record fatalRecord{"fatalRecord", logger::fatal};

    REQUIRE(startRecord.getSeverity() == logger::start);
    REQUIRE(endRecord.getSeverity() == logger::end);
    REQUIRE(infoRecord.getSeverity() == logger::info);
    REQUIRE(debugRecord.getSeverity() == logger::debug);
    REQUIRE(warningRecord.getSeverity() == logger::warning);
    REQUIRE(errorRecord.getSeverity() == logger::error);
    REQUIRE(fatalRecord.getSeverity() == logger::fatal);
}


TEST_CASE("Record::getSeverityText(Severity s)") {
    REQUIRE(logger::Record::getSeverityText(logger::start) == "START");
    REQUIRE(logger::Record::getSeverityText(logger::end) == "END");
    REQUIRE(logger::Record::getSeverityText(logger::info) == "INFO");
    REQUIRE(logger::Record::getSeverityText(logger::debug) == "DEBUG");
    REQUIRE(logger::Record::getSeverityText(logger::warning) == "WARN");
    REQUIRE(logger::Record::getSeverityText(logger::error) == "ERROR");
    REQUIRE(logger::Record::getSeverityText(logger::fatal) == "FATAL");
}


TEST_CASE("Record::getColor(Severity s)") {
    logger::Color::init();

    REQUIRE(logger::Record::getColor(logger::start) == logger::Color::getColors()[logger::RecordColor::green]);
    REQUIRE(logger::Record::getColor(logger::end) == logger::Color::getColors()[logger::RecordColor::green]);
    REQUIRE(logger::Record::getColor(logger::info) == logger::Color::getColors()[logger::RecordColor::white]);
    REQUIRE(logger::Record::getColor(logger::debug) == logger::Color::getColors()[logger::RecordColor::blue]);
    REQUIRE(logger::Record::getColor(logger::warning) == logger::Color::getColors()[logger::RecordColor::yellow]);
    REQUIRE(logger::Record::getColor(logger::error) == logger::Color::getColors()[logger::RecordColor::red]);
    REQUIRE(logger::Record::getColor(logger::fatal) == logger::Color::getColors()[logger::RecordColor::redBG]);
}