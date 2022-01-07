#include <date/date.h>
#include <iostream>

int main() {
  [[maybe_unused]] auto x = date::year{2021}/date::January/1;
  return 0;
}
