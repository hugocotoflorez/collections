#include <stdlib.h>
#include <string.h>

#define objcpy(obj) memcpy(malloc(sizeof(obj)), &obj, sizeof(obj));

/* Add a function to OBJ namespace */
#define NAMESPACE_ADD(obj, func) typeof obj##_func *func = obj##_func

/* Initialize OBJ namespace */
#define namespace(obj)           \
        NAMESPACE_ADD(obj, add); \
        NAMESPACE_ADD(obj, remove);
