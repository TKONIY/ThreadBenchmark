// bthread start
// bthread end
#include "benchmark.h"
#include <iostream>
extern Benchmark benchmark;
int main() { benchmark.ctx_switch_test(1, 100000); }