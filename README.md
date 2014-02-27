# Colbert

Colbert is a tiny testing framework written in C. It has just one assertion
`assert_truthiness` which takes a description and tests whether a given
expression evaluates to a boolean value of true. Once all assertions have been
made, you can call `the_colbert_report()` to print out the results of testing.
This code *should* work, but *should not* taken seriously.

See [example.c](example.c) for an example, you should be able to `gcc example.c`
without issues.

## License

This repository is made available under the terms of the [MIT License](LICENSE.md)
