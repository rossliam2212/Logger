//
// Created by Liam Ross on 15/02/2023.
//

#include "Record.h"

namespace logger {
    Record::Record(const std::string& message, Severity severity)
        : message{message},
          severity{severity},
          t{} {
    }

    std::string Record::getSeverityText(Severity s) {
        switch (s) {
            case start:
                return "START";
            case end:
                return "END";
            case info:
                return "INFO";
            case debug:
                return "DEBUG";
            case warning:
                return "WARN";
            case error:
                return "ERROR";
            case fatal:
                return "FATAL";
        }
    }

    std::string Record::getColor(Severity s) {
        switch (s) {
            case start:
            case end:
                return green;
            case info:
                return white;
            case debug:
                return blue;
            case warning:
                return orange;
            case error:
                return red;
            case fatal:
                return redBG;
        }
    }

    Time Record::getTime() const { return t; }

    std::string Record::getMessage() const { return message; }

    Severity Record::getSeverity() const { return severity; }

    std::ostream& operator<<(std::ostream& os, const Record& record) {
        os << Formatter::formatConsole(record);
        return os;
    }
}