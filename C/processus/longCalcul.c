#include <sys/types.h>
// #include <sys/wait.h> //ne fonctionne pas sur Windows 11
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int sunny_days_in_London(int year) { /* 6 heures de calcul */ }
int second_year_presence(int day) { /* 6 heures de calcul */ }

int main()
{
    int captains_age = 0;
    pid_t cpid = fork();
    if (cpid != 0)
        captains_age += sunny_days_in_London(1305);
    else
        captains_age += second_year_presence(1305);
    printf("Le capitaine à %d ans et mon PID est %d\n", captains_age, getpid());
    return 0;
}