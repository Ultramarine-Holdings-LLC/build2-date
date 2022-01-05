#include <date/date.h>
#include <date/tz.h>
#include <iostream>

int main() {
  [[maybe_unused]] auto x = date::year{2021}/date::January/1;
  [[maybe_unused]] auto t = make_zoned(date::current_zone(), std::chrono::system_clock::now());
  return 0;
}
