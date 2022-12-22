#include <stdio.h>

int main(int argc, char **argv) {
    char str1[] = "Hello";
    char *str2 = "Goodbye";
    char str3[6];

    str3[0] = 'H';
    str3[1] = 'e';
    str3[2] = 'l';
    str3[3] = 'l';
    str3[4] = 'o';
    str3[5] = '\0';

    //printf("%d %s\n", str1, str1);
    //printf("%d %s\n", str2, str2);
    //printf("%d %s\n", str3, str3);

    //str2 = &str1;
    str2 = str1;

    //printf("%d %s\n", str1, str1);
    //printf("%d %s\n", str2, str2);

    printf("str1[]\n | Address : %d\n | str1 int : %d\n | str1 String : %s\n", &str1, str1, str1);
    printf("    \n");
    printf("str2[]\n | Address : %d\n | str2 int : %d\n | str2 String : %s\n", &str2, str2, str2);

    //printf("%x %x %s\n", &str1, str1, str1);
    //printf("%x %x %s\n", &str2, str2, str2);
    return 0;
}