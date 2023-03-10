//
// Created by Liam Ross on 15/02/2023.
//

#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include <iostream>
#include <string>
#include "Outputter.h"
#include "Record.h"

namespace logger {
    class Logger {
    private:
        Outputter out;
        bool outputLogsToFile;

    public:
        Logger();
        Logger(const std::string& outputFileName);

        // TODO add ability to pass const char* as well as strings
        void start(const std::string& message);
        void end(const std::string& message);

        void info(const std::string& message);
        void debug(const std::string& message);
        void warning(const std::string& message);
        void error(const std::string& message);
        void fatal(const std::string& message);

    private:
        void log(const Record& record);
    };
}

#endif //LOGGER_LOGGER_H
