//
// Created by Liam Ross on 15/02/2023.
//

#ifndef LOGGER_OUTPUTTER_H
#define LOGGER_OUTPUTTER_H

#include <string>
#include <fstream>
#include <filesystem>
#include <sstream>
#include "Record.h"

namespace logger {
    namespace fs = std::filesystem;

    class Outputter {
    public:
        static constexpr const char* OUTPUT_DIR{"../logs/"};

    private:
        std::string outputFile;

    public:
        Outputter(const std::string& fileName);
        void output(const Record& record);

    private:
        void init(const std::string& fileName);
        bool setUpDirectory();
        bool setUpFile(const std::string& fileName);
    };
}

#endif //LOGGER_OUTPUTTER_H