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

    return 0;
}
