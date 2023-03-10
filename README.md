# Simple C++ Logger

Log messages can either be logged to just the console by using:
```c++
logger::Logger l{};
```
or to both the console and an output file by using:
```c++
logger::Logger l{logs}; // "logs.txt" will be the output file
```

### Severities
```c++
enum Severity {
    start,      // Outputted in green
    end,        // Outputted in green
    info,       // Outputted in white      
    debug,      // Outputted in blue
    warning,    // Outputted in orange
    error,      // Outputted in red
    fatal       // Outputted in white with a red background
};
```

### Example:
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

### In Console:
<img width="378" alt="Screenshot 2023-03-10 at 16 31 02" src="https://user-images.githubusercontent.com/73957889/224370649-81f03711-e88f-4437-9622-97ffa3f40c19.png">

