#include "../collection.h"

uint32_t c_strlen(const char *str)
{
    if (!str || *str == '\0')
        return 0;

    return c_strlen(str + 1) + 1;
}
