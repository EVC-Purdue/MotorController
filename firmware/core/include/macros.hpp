#pragma once

#define RETURN_IF_NULL(item) \
    do { \
        if (item == NULL) { \
            return false; \
        } \
    } while(0);
