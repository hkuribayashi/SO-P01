#include <stdio.h>
#include <stdlib.h>

int main() {
    // Gera um SIGABRT, que normalmente resulta em um SIGTRAP em depuradores
    abort();

    printf("Este código não será executado após o abort().\n");

    return 0;
}

