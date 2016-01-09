# Colbert

Colbert is a tiny testing framework written in C. It has just one assertion
`assert_truthiness` which takes a description and tests whether a given
expression evaluates to a boolean value of true.

## Usage example

```c
#include <colbert.h>

int
main(int argc, char *argv[])
{
  assert_truthiness("Addition", 1 + 1 == 2);
  assert_truthiness("Bad addition", 1 + 3 == 5);
  assert_truthiness("Multiplication", 5 * 2 == 10);

  colbert_report();
}
```

## License

Copyright © 2013 – 2015 [Daniel Morris](https://github.com/unfunco)  
Licensed under the terms of [The MIT License](LICENSE.md).
