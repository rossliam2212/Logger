//
// Created by Liam Ross on 10/03/2023.
//

#include "Formatter.h"

namespace logger {
    std::string Formatter::formatConsole(const Record& record) {
        std::ostringstream ss;
        ss << record.getColor(record.getSeverity());
        ss << record.getTime().getDateAndTime() << "  ";
        ss << std::setw(MAX_SEVERITY_TEXT_LENGTH) << std::left << record.severityText(record.getSeverity());
        ss << " []  " << record.getMessage();
        ss << white << reset;

        return ss.str();
    }

    std::string Formatter::formatFile(const Record& record) {
        std::ostringstream ss;
        ss << record.getTime().getDateAndTime() << "  ";
        ss << std::setw(MAX_SEVERITY_TEXT_LENGTH) << std::left << record.severityText(record.getSeverity());
        ss << " []  " << record.getMessage();

        return ss.str();
    }
}