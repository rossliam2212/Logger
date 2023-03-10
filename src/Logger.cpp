//
// Created by Liam Ross on 15/02/2023.
//

#include "Logger.h"

namespace logger {
    Logger::Logger()
        : out{"NOT-USED"},
          outputLogsToFile{false} {
    }

    Logger::Logger(const std::string& outputFileName)
        : out{outputFileName},
          outputLogsToFile{true} {
    }

    void Logger::start(const std::string& message) {
        Record r{message, logger::start};
        log(r);
    }

    void Logger::end(const std::string& message) {
        Record r{message, logger::end};
        log(r);
    }

    void Logger::info(const std::string& message) {
        Record r{message, logger::info};
        log(r);
    }

    void Logger::debug(const std::string& message) {
        Record r{message, logger::debug};
        log(r);
    }

    void Logger::warning(const std::string& message) {
        Record r{message, logger::warning};
        log(r);
    }

    void Logger::error(const std::string& message) {
        Record r{message, logger::error};
        log(r);
    }

    void Logger::fatal(const std::string& message) {
        Record r{message, logger::fatal};
        log(r);
    }

    void Logger::log(const logger::Record& record) {
        if (outputLogsToFile)
            out.output(record);

        std::cout << record << "\n";
    }
}
