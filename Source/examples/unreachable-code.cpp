// Copyright (c) 2014, Ruslan Baratov
// All rights reserved.

#include <leathers/push>
#include <leathers/unreachable-code-return>
#if !defined(SHOW_WARNINGS)
# include <leathers/unreachable-code>
#endif
int main() {
  return 2;
  return 1;
}
#include <leathers/pop>
