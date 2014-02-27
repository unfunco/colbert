/**
 * Colbert: a micro-testing framework written in C
 * Copyright © 2013 - 2014 Daniel Morris <https://github.com/unfunco>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef COLBERT_H
#define COLBERT_H

#include <stdio.h>

unsigned short int colbert_t = 0;
unsigned short int colbert_f = 0;

#define assert_truthiness(description, expression) do {      \
  colbert_t++;      printf("%s: ", description);             \
  if (expression) { printf("\e[32m✔\e[0m\n"); }              \
  else            { printf("\e[31m✘\e[0m\n"); colbert_f++; } \
} while(0)

#define the_colbert_report() do {                                     \
  printf("%d tests, %d \e[32m✔\e[0m, %d \e[31m✘\e[0m\n",              \
  colbert_t, colbert_t - colbert_f, colbert_f);                       \
  if (colbert_f > 0) { printf("A failure too calamitous to mock.\n"); \
    exit(1); }                                                        \
} while(0)

#endif
