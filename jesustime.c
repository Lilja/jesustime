#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

// Time between 0 to 1970 in seconds
// (seconds in a year * 1970)
int64_t timeBetweenYear0And1970 = 62296128000;

int main() {
    int currentSeconds = (int)time(NULL);
    int64_t buffer = (int64_t)currentSeconds + timeBetweenYear0And1970;

    printf("%" PRId64 "\n", buffer);
    return 0;
}
