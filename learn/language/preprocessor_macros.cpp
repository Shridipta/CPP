// source file main.c

#include "version_num.h"
#include "build_defs.h"

// want something like: 1.4.1432.2234

const unsigned char completeVersion[] =
{
    VERSION_MAJOR_INIT,
    '.',
    VERSION_MINOR_INIT,
    '-', 'V', '-',
    BUILD_YEAR_CH0, BUILD_YEAR_CH1, BUILD_YEAR_CH2, BUILD_YEAR_CH3,
    '-',
    BUILD_MONTH_CH0, BUILD_MONTH_CH1,
    '-',
    BUILD_DAY_CH0, BUILD_DAY_CH1,
    'T',
    BUILD_HOUR_CH0, BUILD_HOUR_CH1,
    ':',
    BUILD_MIN_CH0, BUILD_MIN_CH1,
    ':',
    BUILD_SEC_CH0, BUILD_SEC_CH1,
    '\0'
};


#include <stdio.h>

int main(int argc, char **argv)
{
    printf("%s\n", completeVersion);
    // prints something similar to: 1.4-V-2013-05-09T15:34:49
}