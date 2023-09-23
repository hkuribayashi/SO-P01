#include <stdio.h>
#include <signal.h>

int main() {
    // Dispara um SIGTRAP
    raise(SIGTRAP);

    printf("Este código não será executado após o SIGTRAP.\n");

    return 0;
}