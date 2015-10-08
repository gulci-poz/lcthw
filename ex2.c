#include <stdio.h>

int main(int argc, char *argv[])
{
    int age = 20;
    int height = 72;

    // valgrind nie narzeka, jeśli usuniemy age z formatowania
    // dostaniemy wtedy jakąś absurdalną wartość

    // valgrind narzeka na zmienne bez początkowej wartości

    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);

    return 0;
}
