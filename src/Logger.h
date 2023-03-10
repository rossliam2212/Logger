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

    public:
        Logger(const std::string& outputFileName);

        void start(const std::string& message);
        void end(const std::string& message);
        
        void info(const std::string& message);
        void debug(const std::string& message);
        void warning(const std::string& message);
        void error(const std::string& message);
        void fatal(const std::string& message);
    };
}

#endif //LOGGER_LOGGER_H
