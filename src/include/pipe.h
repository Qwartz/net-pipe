/**
 * \file pipe.h
 * @version 1.0
 */
#ifndef PIPE_H_
#define PIPE_H_

#include <stdio.h>


/**
 * @brief This is used to define different sizes of network pipe.
 *
 * @param pipe16_t - 16-Bit pipe (max of 32-Bits per packet)
 * @param pipe32_t - 32-Bit pipe (max of 64-Bits per packet)
 * @param pipe64_t - 64-Bit pipe (max of 128-Bits per packet)
 */
struct pipe_sizes
{
    unsigned short pipe16_t;
    unsigned int   pipe32_t;
    unsigned long  pipe64_t;
} pipe_t;

#endif
