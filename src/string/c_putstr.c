#include "../collection.h"

void c_putstr(const char *str)
{
    write(1, str, c_strlen(str));
}
