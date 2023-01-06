//
// Created by  shecannotsee on 2023/1/6.
//

#ifndef SHE_MONITOR_REGISTERMODULE_H
#define SHE_MONITOR_REGISTERMODULE_H


class RegisterModule {
 public:
  RegisterModule();
  ~RegisterModule();
  // Disable copy
  RegisterModule(const RegisterModule&) = delete;
  RegisterModule& operator=(const RegisterModule&) = delete;
  // Disable move
  RegisterModule(RegisterModule&&) = delete;
  RegisterModule& operator=(RegisterModule&&) = delete;

 private:

};


#endif //SHE_MONITOR_REGISTERMODULE_H
