#include<stdio.h>
/*Divyaranjan Sahoo
To resolve time in Secondss into factors*/
void main()
{int Seconds,Minutes,Hours,Rem;
printf("Enter time in Seconds =");
scanf("%d",&Seconds);
Hours=Seconds/(60*60);
Rem=Seconds%(60*60);
Minutes=Rem/60;
Seconds=Rem%60;
printf("Hours=%d",Hours);
printf("\nMinutes=%d",Minutes);
printf("\nSeconds=%d",Seconds);
}
