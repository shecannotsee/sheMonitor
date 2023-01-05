//
// Created by  shecannotsee on 2023/1/5.
//

#ifndef SHE_MONITOR_RECORDINGTIME_H
#define SHE_MONITOR_RECORDINGTIME_H

#include <chrono>

#include <Recording/time_unit.h>

namespace sheMonitor {

class RecordingTime {
 public:
  using record = std::chrono::time_point<std::chrono::system_clock>;
 public:
  RecordingTime() = delete;
  explicit RecordingTime(sheMonitor::TimeUnit);
  ~RecordingTime() = default;

 private:
  unsigned int time_;               // start_和end_的差值
  record start_;                    // 记录开始
  record end_;                      // 记录结束
  sheMonitor::TimeUnit time_unit_;  // 时间单位

 public:
  // Start to record time
  void start();
  // Stop to record time
  void end();
  // Get the elapsed time
  int get();

};

};// namespace sheMonitor

#endif //SHE_MONITOR_RECORDINGTIME_H
