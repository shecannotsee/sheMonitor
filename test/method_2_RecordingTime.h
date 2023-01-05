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

  // 递归测试
  sheMonitor::RecordingTime recursion_se(sheMonitor::TimeUnit::Seconds);
  sheMonitor::RecordingTime recursion_ms(sheMonitor::TimeUnit::Milliseconds);
  sheMonitor::RecordingTime recursion_us(sheMonitor::TimeUnit::Microseconds);
  recursion_se.start();
  recursion_ms.start();
  recursion_us.start();
  for(int i=0; i<time_record_us.get(); i++) {
    time_record_se.start();
  };
  recursion_se.end();
  recursion_ms.end();
  recursion_us.end();
  std::cout<<(double)recursion_se .get()<<"s\n";
  std::cout<<(double)recursion_ms.get()/1000<<"s\n";
  std::cout<<(double)recursion_us.get()/1000000<<"s\n";

};

};// namespace method_2_RecordingTiome

#endif //SHE_MONITOR_METHOD_2_RECORDINGTIME_H
