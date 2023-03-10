# Simple C++ Logger

## Example:
```c++
#include "Logger.h"

int main() {
    
    // Logs will be outputted to the console & logs.txt file 
    logger::Logger l{logs};
    
    l.start("Start Message");
    l.info("Info Message");
    l.debug("Debug Message");
    l.warning("Warning Message");
    l.error("Error Message");
    l.fatal("Fatal Message");
    l.end("End Message");
    
    return 0;
};
```

### Output:
```
10/03/23  13:45:11  START  []  Start Message
10/03/23  13:45:11  INFO   []  Info Message
10/03/23  13:45:11  DEBUG  []  Debug Message
10/03/23  13:45:11  WARN   []  Warning Message
10/03/23  13:45:11  ERROR  []  Error Message
10/03/23  13:45:11  FATAL  []  Fatal Message
10/03/23  13:45:11  END    []  End Message
```