#include <cstring/strcat.h>

void mstrcat(const char* p, const char* q, char* array){
  
while (*p != 0)
{
  *array = *p;
 ++array;
  ++p;
}

while (*q != 0)
{
  *array = *q;
 ++array;
  ++q;
}

*array = 0;


}