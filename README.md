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
    warning,    // Outputted in yellow
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
<img width="338" alt="Screenshot 2023-03-13 at 16 59 31" src="https://user-images.githubusercontent.com/73957889/224772647-d9c9fa87-74c3-4176-8d54-576edfcc57fb.png">

### Changing Log Colors:
Log colors can be changed:
```c++
logger::Logger::changeRecordColor(logger::Severity severity, logger::RecordColor color);
```

Default Colors:
```
START   - Green
END     - Green
INFO    - White
DEBUG   - Blue
WARN    - Yellow
ERROR   - Red
FATAL   - White w/ Red Background
```

Color Options:
```
White
Green
Blue
Red
Magenta
Yellow
Cyan
Green Background
Blue Background
Red Background
Magenta Background
Yellow Background
Cyan Background
```
