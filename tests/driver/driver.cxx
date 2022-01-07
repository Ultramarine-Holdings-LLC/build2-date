#include <date/date.h>
#ifdef TEST_TZ
#include <date/tz.h>
#endif
#include <iostream>

int main() {
  [[maybe_unused]] auto x = date::year{2021}/date::January/1;
#ifdef TEST_TZ
  [[maybe_unused]] auto t = make_zoned(date::current_zone(), std::chrono::system_clock::now());
#endif
  return 0;
}
