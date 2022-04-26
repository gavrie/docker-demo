#include <stdio.h>
#include <unistd.h>

int main()
{
    char hostname[256];
    gethostname(hostname, 256);
    printf("%s\n", hostname);
}
