//
// Created by Liam Ross on 15/02/2023.
//

#include "Outputter.h"
#include <iostream>

namespace logger {
    Outputter::Outputter(const std::string& fileName) {
        init(fileName);
    }

    void Outputter::init(const std::string& fileName) {
        if (!setUpDirectory())
            exit(-1);

        if (!setUpFile(fileName))
            exit(-1);
    }

    bool Outputter::setUpDirectory() {
        if (!fs::create_directories(OUTPUT_DIR)) {
            if (fs::exists(OUTPUT_DIR)) {
                return true;
            }
            return false;
        }
        return true;
    }

    bool Outputter::setUpFile(const std::string& fileName) {
        std::ostringstream ss;
        ss << OUTPUT_DIR << fileName << ".txt";
        outputFile = ss.str();

        std::ofstream out{outputFile};

        if (!out)
            return false;

        out.close();
        return true;
    }

    void Outputter::output(const Record& record) {
        std::ofstream out{outputFile, std::ios::app};
        out << Formatter::formatFile(record) << "\n";
        out.close();
    }
}
