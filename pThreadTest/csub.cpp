#include <stdio.h>
#include "csub.h"
#include "excuteCpp.h"

int csub(int const i)
{
    printf("%d\n", i*2);

    excuteCpp();  // C++

    return 11;
}
