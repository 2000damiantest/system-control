#ifndef PROCESSOR_H
#define PROCESSOR_H

class controls
{
private:
  unsigned int cpu_log;
  
public:
  void start_controller(unsigned int flag)
  {
    cpu_log |= flag;
  }

  void end_controller(unsigned int flag)
  {
    cpu_log |= flag;
  }

  void log_controller()
  {
    printf("Controller version 3.0\n");
    printf("Controller is %s\n", flag & 1 ? "activated" : "not activated");
  }
};

#endif
