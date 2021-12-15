#include <cstring/strlen.h>
#include <stddef.h>

unsigned long long mstrlen(const char* p){
  unsigned long long counter = 0;
  
while (*p != 0)
{
  ++p;
  ++counter;
}

  
  
  return counter;
}
