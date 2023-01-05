//
// Created by  shecannotsee on 2023/1/5.
//

#include "RecordingTime.h"

sheMonitor::RecordingTime::RecordingTime(sheMonitor::TimeUnit time_unit)
    : time_(0),
      start_(std::chrono::system_clock::now()),
      end_(std::chrono::system_clock::now()),
      time_unit_(time_unit) {
};

void sheMonitor::RecordingTime::start() {
  start_ = std::chrono::system_clock::now();
};

void sheMonitor::RecordingTime::end() {
  end_ = std::chrono::system_clock::now();
}

int sheMonitor::RecordingTime::get() {
  if (time_unit_==TimeUnit::Seconds) {
    time_ = (std::chrono::time_point_cast<sheMonitor::bit32::Seconds>(end_) -
             std::chrono::time_point_cast<sheMonitor::bit32::Seconds>(start_)).count();
  } else if (time_unit_==TimeUnit::Milliseconds) {
    time_ = (std::chrono::time_point_cast<sheMonitor::bit32::Milliseconds>(end_) -
             std::chrono::time_point_cast<sheMonitor::bit32::Milliseconds>(start_)).count();
  } else if (time_unit_==TimeUnit::Microseconds) {
    time_ = (std::chrono::time_point_cast<sheMonitor::bit32::Microseconds>(end_) -
             std::chrono::time_point_cast<sheMonitor::bit32::Microseconds>(start_)).count();
  }
  return this->time_;
}
