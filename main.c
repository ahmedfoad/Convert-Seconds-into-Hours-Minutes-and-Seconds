#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TotalSeconds, Hours, Minutes, Seconds;
    printf("Please enter the total seconds: ");
    scanf("%d", &TotalSeconds);
     printf("The result is: \n");

     Hours = TotalSeconds / 3600;
     Minutes = (TotalSeconds - (Hours * 3600)) / 60; // 6.452  get the 6 mins only and eskip the remaining seconds
     Seconds = (TotalSeconds - (Hours * 3600)) % 60;
     printf("Hours: %d \n", Hours);
     printf("Minutes: %d \n", Minutes);
     printf("Remaining seconds: %d  \n",Seconds);
    return 0;
}
