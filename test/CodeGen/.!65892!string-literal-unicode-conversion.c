// RUN: %clang_cc1 -triple i386-unknown-unknown -emit-llvm %s -o - | FileCheck -check-prefix=CHECK-C %s
// RUN: %clang_cc1 -x c++ -std=c++0x -triple i386-unknown-unknown -emit-llvm %s -o - | FileCheck -check-prefix=CHECK-CPP0X %s
// RUN: %clang_cc1 -x c++ -std=c++0x -fwchar-type=short -fno-signed-wchar -triple i386-unknown-unknown -emit-llvm %s -o - | FileCheck -check-prefix=CHECK-SHORTWCHAR %s

// This file contains a mix of ISO-8859-1 and UTF-8 encoded data.
// the literal assigned to 'aa' should be the ISO-8859-1 encoding for the code
// points U+00C0 U+00E9 U+00EE U+00F5 U+00FC

// The rest of the literals should contain the UTF-8 encoding for U+041A U+043E
// U+0448 U+043A U+0430

#ifndef __cplusplus
#include <stddef.h>
#endif

#ifdef __cplusplus
extern "C"
#endif
void f() {
  // CHECK-C: private unnamed_addr constant [6 x i8] c"\C0\E9\EE\F5\FC\00", align 1
  // CHECK-CPP0X: private unnamed_addr constant [6 x i8] c"\C0\E9\EE\F5\FC\00", align 1
