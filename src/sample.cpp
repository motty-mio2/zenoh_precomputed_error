#include "sample.hpp"

void init(std::string name) {
  auto conf = zenoh::Config::create_default();
  std::cout << "Hello from sample.hpp! Name: " << name << std::endl;
}
