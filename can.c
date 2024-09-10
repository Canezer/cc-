#include <stdio.h>
int main()
{
   int ss = 0;
   char sentence[30];
   int i = 0;
   printf("cumlenizi yaziniz: \n");

   scanf("%s", sentence);

   char sesliler[5] = {'a', 'e', 'u', 'o', 'i'};
   for (i = 0; i < 30; i++)
   {
      char x = sentence[i];
      if (x =='\0')
      {
         break;
      }
      for (int j = 0; j < 5; j++)
      {
         if (x == sesliler[j])
         {
            ss++;
         }
      }
   }
   printf("sesli harflerin sayisi %d", ss);
}
