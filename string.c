#include <stdio.h>

size_t my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int unused_str_function(char *s) 
{
   return *s;
}

int unused_function(int i)
{
   return i;
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));

   return 0;
}

char unused_char_function(char c)
{
   return c;
}