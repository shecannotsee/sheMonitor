//
// Created by  shecannotsee on 2023/1/5.
//

#ifndef SHE_MONITOR_METHOD_1_TIME_H
#define SHE_MONITOR_METHOD_1_TIME_H

#include <chrono>
#include <unistd.h>

namespace method_1_time {

void main() {
  auto start = std::chrono::system_clock::now();
  sleep(1);
  auto end = std::chrono::system_clock::now();

  using Microseconds = std::chrono::duration<int, std::ratio<1, 1000000>>;
  using Milliseconds = std::chrono::duration<int, std::ratio<1, 1000>>;
  using Seconds      = std::chrono::duration<int, std::ratio<1, 1>>;

  using Microseconds_ = std::chrono::duration<long long int, std::ratio<1, 1000000>>;
  using Milliseconds_ = std::chrono::duration<long long int, std::ratio<1, 1000>>;
  using Seconds_      = std::chrono::duration<long long int, std::ratio<1, 1>>;

  auto t = (std::chrono::time_point_cast<Microseconds_>(end)-std::chrono::time_point_cast<Microseconds_>(start)).count();
  std::cout<<t<<std::endl;




};


};// namespace method_1_time

#endif //SHE_MONITOR_METHOD_1_TIME_H
