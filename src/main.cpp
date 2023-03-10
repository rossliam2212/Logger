//
// Created by Liam Ross on 15/02/2023.
//

#include <iostream>
#include <iomanip>
#include "Record.h"
#include "Logger.h"

#define test "\x1B[101m"
#define redBG "\x1B[101m"
#define blackBG "\x1B[99m"


int main() {
//    std::time_t t =  std::time(NULL);
//    std::cout << std::put_time(std::localtime(&t), "%d/%m/%y %T");

//    logger::Record r{"This is an info log", logger::info};
//    logger::Record r1{"This is a debug log", logger::debug};
//    logger::Record r2{"This is a warning log", logger::warning};
//    logger::Record r3{"This is an error log", logger::error};
//    logger::Record r4{"This is a fatal log", logger::fatal};
//    std::cout << r << "\n";
//    std::cout << r1 << "\n";
//    std::cout << r2 << "\n";
//    std::cout << r3 << "\n";
//    std::cout << r4 << "\n";

// ----------
//    logger::Logger logger{"logs"};
//    logger.info("This is an info log");
//    logger.debug("This is a debug log");
//    logger.warning("This is a warning log");
//    logger.error("This is an error log");
//    logger.fatal("This is a fatal log");
//    logger.debug("TESTING");
//
////    logger.changeInfoColor("blue");
//    std::cout << "\n";
//    logger.info("This is an info log");

//    std::cout << redBG << "Hello" << "\n";
//    std::cout << blackBG << "Hello" << "\n";

    logger::Logger l{"logs"};

    l.info("HELLO THERE");
//    l.fatal("FATAL");
    l.debug("DEBUG");
    return 0;
}
