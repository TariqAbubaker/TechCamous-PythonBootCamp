#include <cs50.h> // cs50 library
#include <stdio.h>

int main(void)
// hello App
{
    string name = get_string("Waht's your name? \n");
    string profission = get_string("What's your profission ? \n")
    printf("hello, %s you are welcome, you are our new %s\n", name, profission);
}
