#include <stdio.h>
#include "main.h"
/**
 * postitive_or_negative - is function to check on number
 * @i : is number
 * Return : void 
 */
void postitive_or_negative(int i)
{
        if (i > 0)
                printf("%d is positive\n", i);
        else if (i < 0)
                printf("%d is negative\n", i);
        else
                printf("%d is zero\n", i);
}
