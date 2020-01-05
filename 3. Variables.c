#include <stdio.h>
#include <stdlib.h>

int main()
{
   char characterName[] = "John";
   int characterAge = 35;
   printf("There once was a man named %s\n", characterName);
   printf("he was %d years old.\n", characterAge);
   printf("He really liked the name %s\n", characterName);
   printf("but did not like being %d.\n", characterAge);

   char characterName_1[] = "Tom";
   int characterAge_1 = 67;
   printf("There once was a man named %s\n", characterName_1);
   printf("he was %d years old.\n", characterAge_1);

   char characterAge_2 = 30;
   printf("He really liked the name %s\n.", characterName_1);
   printf("but did not like being %d.\n", characterAge_2);
    return 0;
}

