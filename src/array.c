#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    printf("%s", strlwr(str1));
    printf("%s", strupr(str1));
    return 0;
}