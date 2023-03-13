//
// Created by Liam Ross on 15/02/2023.
//

#include "Logger.h"

int main() {
    logger::Logger l{"logs"};

    l.start("Start Message");
    l.info("Info Message");
    l.debug("Debug Message");
    l.warning("Warning Message");
    l.error("Error Message");
    l.fatal("Fatal Message");
    l.end("End Message");

    logger::Logger::changeRecordColor(logger::Severity::fatal, logger::RecordColor::magentaBG);
    l.fatal("NEW FATAL MESSAGE");


    printf("\n\n");
    printf("\x1B[31mONE\033[0m\t\t");
    printf("\x1B[32mTWO\033[0m\t\t");
    printf("\x1B[33mTHREE\033[0m\t\t");
    printf("\x1B[34mFOUR\033[0m\t\t");
    printf("\x1B[35mFIVE\033[0m\n");

    printf("\x1B[36mSIX\033[0m\t\t");
    printf("\x1B[36mSEVEN\033[0m\t\t");
    printf("\x1B[36mEIGHT\033[0m\t\t");
    printf("\x1B[37mNINE\033[0m\t\t");
    printf("\x1B[93mTEN\033[0m\n");

    printf("\033[3;42;30mTexting\033[0m\t\t");
    printf("\033[3;43;30mTexting\033[0m\t\t");
    printf("\033[3;44;30mTexting\033[0m\t\t");
    printf("\033[3;104;30mTexting\033[0m\t\t");
    printf("\033[3;100;30mTexting\033[0m\n");

    printf("\033[3;47;35mTexting\033[0m\t\t");
    printf("\033[2;47;35mTexting\033[0m\t\t");
    printf("\033[1;47;35mTexting\033[0m\t\t");
    printf("\t\t");
    printf("\n");

    return 0;
}
