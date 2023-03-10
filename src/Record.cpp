//
// Created by Liam Ross on 15/02/2023.
//

#include "Record.h"

namespace logger {
    Record::Record(const std::string& message, logger::Severity severity)
        : message{message},
          severity{severity},
          t{} {
    }

    std::string Record::severityText(logger::Severity s) {
        switch (s) {
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

    std::string Record::getColor(logger::Severity s) {
        switch (s) {
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

    std::string Record::formatConsole(const Record& record) {
        const std::size_t maxSeverityTextLength{6};
        auto resetColor{record.getColor(record.getSeverity())};

        std::ostringstream ss;
        ss << record.getColor(record.getSeverity());
        ss << record.t.getDateAndTime() << "  ";
        ss << std::setw(maxSeverityTextLength) << std::left << record.severityText(record.getSeverity());
        ss << " []  " << record.getMessage();
        ss << resetColor;

        return ss.str();
    }

    std::string Record::formatFile(const logger::Record& record) {
        const std::size_t maxSeverityTextLength{6};

        std::ostringstream ss;
        ss << record.t.getDateAndTime() << "  ";
        ss << std::setw(maxSeverityTextLength) << std::left << record.severityText(record.getSeverity());
        ss << " []  " << record.getMessage();
        return ss.str();
    }

    Time Record::getTime() const { return t; }
    std::string Record::getMessage() const { return message; }
    Severity Record::getSeverity() const { return severity; }


    std::ostream& operator<<(std::ostream& os, const Record& record) {
        os << record.formatConsole(record);
        return os;
    }
}