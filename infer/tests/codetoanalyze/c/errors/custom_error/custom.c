/*
 * Copyright (c) 2015 - present Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <math.h>

void __infer_fail(char*);

void check_exponent(int x) {
  if (x < 0) __infer_fail("UNEXPECTED_NEGATIVE_EXPONENT");
}

int power(int x) {
  check_exponent(x);
  return pow(2, x);
}

int pif() {
  int a = 3;
  return power(a);
}

int paf() {
  int a = -3;
  return power(a);
}

int global;

void set_global() {
  global = -2;
}

int pouf() {
  set_global();
  return power(global);
}
