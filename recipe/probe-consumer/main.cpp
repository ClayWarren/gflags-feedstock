#include <gflags/gflags.h>
#include <iostream>
DEFINE_int32(count, 0, "consumer count");
int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  if (FLAGS_count != 42 || argc != 1) return 1;
  std::cout << "Installed gflags parsing passed\n";
}
