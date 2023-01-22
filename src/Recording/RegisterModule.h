//
// Created by  shecannotsee on 2023/1/6.
//

#ifndef SHE_MONITOR_REGISTERMODULE_H
#define SHE_MONITOR_REGISTERMODULE_H

#include <Recording/RecordingTime.h>

namespace sheMonitor {
class RegisterModule {
 public:
  RegisterModule();
  ~RegisterModule();
  // Disable copy
  RegisterModule(const RegisterModule &) = delete;
  RegisterModule &operator=(const RegisterModule &) = delete;
  // Disable move
  RegisterModule(RegisterModule &&) = delete;
  RegisterModule &operator=(RegisterModule &&) = delete;

 private:

};// class RegisterModule
};// namespace sheMonitor


#endif //SHE_MONITOR_REGISTERMODULE_H
