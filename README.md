# Simple C++ Logger

## Example:
```c++
#include "Logger.h"

int main() {
    logger::Logger l{logs};
    
    l.start("Start Message");
    l.info("Info Message");
    l.debug{("Debug Message");
    l.error("Error Message");
    l.fatal("Fatal Message");
    l.end("End Message");
};
```

### Output:
```
10/03/23  13:45:11  START  []  Start Message
10/03/23  13:45:11  INFO   []  Info Message
10/03/23  13:45:11  DEBUG  []  Debug Message
10/03/23  13:45:11  ERROR  []  Error Message
10/03/23  13:45:11  FATAL  []  Fatal Message
10/03/23  13:45:11  END    []  End Message
```