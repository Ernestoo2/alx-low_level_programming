#include <main.h>

/** printing using for loop
* _putchar has 8 characters
* we are creating an array of characters
* we are printing all the index from to 0-7 using for loop
* variable 0-7 we assign a variable integer i;
*/

int main(void)
{
    char name[] = "_putchar";

    for (int i = 0; i < 8; i++)
    {
        _putchar("%c", name[i]);
    }
    _putchar("\n");
}
