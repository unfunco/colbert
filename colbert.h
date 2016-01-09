/*
 * Colbert
 *
 * Copyright © 2013 - 2016 Daniel Morris <daniel@honestempire.com>
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

#pragma once

#include <stdio.h>
#include <stdint.h>

uint8_t colbert_tests = 0;
uint8_t colbert_fails = 0;

#define assert_truthiness(description, expression) do { \
  colbert_tests++; \
  printf("%s: ", description); \
  if (expression) { \
    printf("\e[32m\u2714\e[0m\n"); \
  } else { \
    printf("\e[31m\u2718\e[0m\n"); \
    colbert_fails++; \
  } \
} while(0)

#define colbert_report() do { \
  printf("%d tests, %d \e[32m\u2714\e[0m, %d \e[31m\u2718\e[0m\n", colbert_tests, colbert_tests - colbert_fails, colbert_fails); \
} while(0)
