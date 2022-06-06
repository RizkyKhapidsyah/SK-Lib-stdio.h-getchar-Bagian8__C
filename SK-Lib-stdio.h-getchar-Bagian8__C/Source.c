#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char buffer[81];
    int  i, ch;

    ch = _fgetchar();

    for (i = 0; (i < 80) && (feof(stdin) == 0); i++) {
        buffer[i] = (char)ch;
        ch = _fgetchar();
    }

    buffer[i] = '\0';
    printf("%s\n", buffer);

    _getch();
    return 0;
}