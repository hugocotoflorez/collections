#include <stdlib.h>
#include <string.h>

#define objcpy(obj) memcpy(malloc(sizeof(obj)), &obj, sizeof(obj));
