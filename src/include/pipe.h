/**
 * \file pipe.h
 * @version 1.0
 */
#ifndef PIPE_H_
#define PIPE_H_

#include <stdio.h>

struct pipe_sizes
{
    unsigned short pipe16_t;
    unsigned int   pipe32_t;
    unsigned long  pipe64_t;
} pipe_t;

#endif
