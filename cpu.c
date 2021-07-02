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
};

#endif
