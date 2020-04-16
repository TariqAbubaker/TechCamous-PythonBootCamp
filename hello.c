#include <cs50.h> // cs50 library
#include <stdio.h>

int main(void)
// hello App
{
    string name = get_string("Waht's your name? \n");
    printf("hello, %s you are welcome\n", name);
}
