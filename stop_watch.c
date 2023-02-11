#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#ifdef _WIN64
#include <conio.h>
#define sleep(x) Sleep(x * 1000)
#else
#define clrscr() printf("\e[1;1H\e[2J")
#endif
#define Cycle 60
int main()
{
    int hour, minute, second;
    int h = 0, m = 0, s = 0;
    printf("Enter Hour : ");
    scanf("%d", &hour);
    printf("Enter Minute : ");
    scanf("%d", &minute);
    printf("Enter Second : ");
    scanf("%d", &second);
    clrscr();

    while (true)
    {
        printf("\n\n##### Stop Watch #####\n");
        printf("       %.2d:%.2d:%.2d\n", h, m, s);
        printf("########################\n");

        if (h == hour && m == minute && s == second)
        {
            break;
        }
        else
        {
            clrscr();
        }
        s++;
        sleep(1);
        if (s == Cycle)
        {
            m++;
            s = 0;
        }
        if (m == Cycle)
        {
            h++;
            m = 0;
        }
    }
    printf("Stop Watch is Finished___!");
}