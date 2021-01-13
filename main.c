/*
** EPITECH PROJECT, 2018
**
** File description:
**
*/

//#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_node {
    size_t size;
    int free;
    struct s_node *next;
    char end[1];
} node_t;

int main(void)
{
    char *test = malloc(10);
/*    test[0] = 'a';
    test[1] = 'b';
    test[2] = 'c';
    test[3] = 'd';
    test[4] = '\0';*/
    printf("%p\n", test);
    free(test);
//    printf("%s\n", test);
    char *test2 = malloc(5);
    printf("%p\n", test2);
//    printf("bru %p\n", test2);
/*    int *pro = (int*)calloc(3, sizeof(int));
    printf("%d\n", pro[0]);
    printf("%d\n", pro[1]);
    printf("%d\n", pro[2]);
    test2[0] = 'a';
    test2[1] = 'b';
    test2[2] = 'c';
    test2[3] = 'd';
    test2[4] = 'e';
//    test2 = realloc(test2, 10);
    test2[5] = 'f';
    test2[6] = 'g';
    test2[7] = 'h';
    test2[8] = 'i';
    test2[9] = '\0';
    printf("%p\n", test2);
    free (test2);*/
    return 0;
}

/*int main(int ac, char **av)
{

    char *s1 = "12345";
    char *s2 = "abcde";
    char *s3 = malloc(sizeof(char) * 11);
    char *s4;
    char *s5;
    char *s6;
    char *s7;
    char *s8;

    strcpy(s3, s1);
    strcat(s3, s2);

    // s[0] = 'a';
    // s[1] = 'b';
    // s[2] = 'c';
    // s[3] = 'd';
    // s[4] = 'e';
    // s[5] = 'f';
    // s[6] = 'g';
    // s[7] = 'h';
    // s[8] = 'i';
    // s[9] = 'j';
    // s[10] = 'k';
    // s[11] = 'l';
    // s[12] = 'm';
    // s[13] = 'n';


    write(1, "test = ", 7);
    printf("%s\n", s3);
    printf("s3 address = %p\n", s3);
    printf("s4 address = %p\n", s4);
    printf("s5 address = %p\n", s5);
    printf("s6 address = %p\n", s6);
    printf("s7 address = %p\n", s7);
    printf("s8 address = %p\n", s8);

    free(s3);
    printf("nb = %s", s3);
    return (0);
}
*/
