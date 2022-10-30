#include <stdio.h>

void print(char s[])
{
    printf("%s", s);
}

int main(int argc, char const *argv[])
{
    char *food_name;
    scanf("%s", food_name);

    print(food_name);
    return 0;
}
