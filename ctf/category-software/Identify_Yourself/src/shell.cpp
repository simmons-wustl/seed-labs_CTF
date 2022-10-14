#include <stdio.h>

#ifndef USER
#define USER "user"
#endif

#ifndef PASS
#define PASS "pass"
#endif

int main(int argc, char* argv[])
{
   if (argc != 2)
   {
      printf("Usage: ./shell <IP_addr>\n");
      return 1;
   }
   
   return 0;
}
