//
// Created by Liam Ross on 15/02/2023.
//

#include "Logger.h"

namespace logger {
    Logger::Logger(const std::string& outputFileName)
        : out{outputFileName} {

    }

    void Logger::info(const std::string& message) {
        Record r{message, logger::info};
        out.output(r);
        std::cout << r << "\n";
    }

    void Logger::debug(const std::string& message) {
        Record r{message, logger::debug};
        out.output(r);
        std::cout << r << "\n";
    }

    void Logger::warning(const std::string& message) {
        Record r{message, logger::warning};
        out.output(r);
        std::cout << r << "\n";
    }

    void Logger::error(const std::string& message) {
        Record r{message, logger::error};
        out.output(r);
        std::cout << r << "\n";
    }

    void Logger::fatal(const std::string& message) {
        Record r{message, logger::fatal};
        out.output(r);
        std::cout << r << "\n";
    }
}
