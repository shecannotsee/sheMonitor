//
// Created by  shecannotsee on 2023/1/6.
//

#ifndef SHE_MONITOR_METHOD_2_RECORDINGTIME_H
#define SHE_MONITOR_METHOD_2_RECORDINGTIME_H

#include <unistd.h>
#include <Recording/RecordingTime.h>

namespace method_2_RecordingTime {

void main() {
  sheMonitor::RecordingTime time_record_se(sheMonitor::TimeUnit::Seconds);
  sheMonitor::RecordingTime time_record_ms(sheMonitor::TimeUnit::Milliseconds);
  sheMonitor::RecordingTime time_record_us(sheMonitor::TimeUnit::Microseconds);
  time_record_se.start();
  time_record_ms.start();
  time_record_us.start();
  sleep(1);
  time_record_se.end();
  time_record_ms.end();
  time_record_us.end();
  std::cout<<time_record_se.get()<<"s\n";
  std::cout<<time_record_ms.get()<<"ms\n";
  std::cout<<time_record_us.get()<<"us\n";
};

};// namespace method_2_RecordingTiome

#endif //SHE_MONITOR_METHOD_2_RECORDINGTIME_H
