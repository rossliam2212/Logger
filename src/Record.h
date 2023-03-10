//
// Created by Liam Ross on 15/02/2023.
//

#ifndef LOGGER_RECORD_H
#define LOGGER_RECORD_H

#include <map>
#include <sstream>
#include <iomanip>
#include <typeinfo>
#include "Time.h"
#include "Formatter.h"

#define white "\x1B[97m"
#define blue "\x1B[36m"
#define orange "\x1B[34m"
#define red "\x1B[31m"
#define redBG "\x1B[101m"
#define reset "\x1B[0m"

namespace logger {
    class Formatter;

    enum Severity {
        start,
        end,
        info,
        debug,
        warning,
        error,
        fatal
    };

    class Record {
        friend std::ostream& operator<<(std::ostream& os, const Record& record);

    private:
        Time t;
        std::string message;
        Severity severity;

    public:
        Record(const std::string& message, Severity severity);

        static std::string severityText(Severity s) ;
        static std::string getColor(Severity s) ;

        Time getTime() const;
        std::string getMessage() const;
        Severity getSeverity() const;
    };
}


#endif //LOGGER_RECORD_H
