//
// Created by  shecannotsee on 2023/1/5.
//

#ifndef SHE_MONITOR_TIME_UNIT_H
#define SHE_MONITOR_TIME_UNIT_H

#include <chrono>

namespace sheMonitor {

namespace bit32 {
using Microseconds = std::chrono::duration<int, std::ratio<1, 1000000>>;
using Milliseconds = std::chrono::duration<int, std::ratio<1, 1000>>;
using Seconds = std::chrono::duration<int, std::ratio<1, 1>>;
};// namespace bit32

namespace bit64{
using Microseconds = std::chrono::duration<long long int, std::ratio<1, 1000000>>;
using Milliseconds = std::chrono::duration<long long int, std::ratio<1, 1000>>;
using Seconds = std::chrono::duration<long long int, std::ratio<1, 1>>;
};// namespace bit64



};// namespace sheMonitor

#endif //SHE_MONITOR_TIME_UNIT_H
