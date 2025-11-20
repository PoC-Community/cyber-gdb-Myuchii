#include <stdio.h>

int main(void)
{
    int a = 7;
    int b = 1;

    //gdb-peda$ x/s 0x804a00c
    //0x804a00c:      "Normal."
    if ((a + b) == 8) {
        puts("Normal");
    //gdb-peda$ x/s 0x804a014
    //0x804a014:      "Hmm wait what ?!"
    } else {
        puts("hmm wait what ?!");
    }
    //eax == Variable de retour comme b est dans le registre EAX cqfd
    return b;
}