/*!
 * \file pipe.h
 * \brief Network piping code
 * \details This file contains all code related to network piping and network packet creation
 * \author Corbin Matschull
 * \version 1.1r2
 * \date Aug 28. 2015
 * \pre Make sure you have run ./configure with all options chosen
 * \warning File with throw errors if run outside of GCC or LLVM/Clang
 * \copyright Apache Version 2
 */
#ifndef PIPE_H_
#define PIPE_H_

#include <stdio.h>


/**
 * @brief This is used to define different sizes of network pipe.
 */
struct pipe_sizes
{
    unsigned short pipe16_t; /**< 16-bit pipe (max of 32-Bit packet size)*/
    unsigned int   pipe32_t; /**< 32-Bit pipe (max of 64-Bit packet size)*/
    unsigned long  pipe64_t; /**< 64-Bit pipe (max of 128-Bit packet size)*/
} pipe_t /**< Typename for pipe_sizes */;

/**
 * @brief Checks for precondition code
 *
 * @param cond - What condition is this being run under?
 * @param mcmd[] - Command to be run
 *
 * @return Nothing
 *
 */
void has_precondition(unsigned int *cond, const char mcmd[]);
#endif
