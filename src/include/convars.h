/*!
 * \file convars.h
 * \brief Command variables
 * \details This contains all code pertaining to piping commands to/from the server.
 * \author Corbin Matschull
 * \date Aug 30. 2015
 * \version 0.1
 * \pre Use in conjunction with thread locking
 * \warning Make sure you take care not to overflow the buffer.
 * \copyright Apache Version 2
 */
#ifndef CONVARS_H_
#define CONVARS_H_

#ifdef ENG_HAS_INLINE_VISIBILITY
#   define  CALL_HEAP_FROM_ENG 0x02E
#endif

/**
 * \brief Used for detailing command variables.
 * \details This contains all the command variables for sending commands to/from the pipe.
 */
struct cvar
{
    bool hasNoVars; /**<  Use this when concerened about sending explicitly 0 variables to/from the pipe */
   unsigned int cvars[]; /**< Array of variables */
};

/**
 * \brief Used to boost privs in pipe
 *
 * \param has_static_boost - Create a static boost (can only modify privs once)
 * \param vars - accessor to cvar
 *
 * \return Nothing
 */
void boost_vars(unsigned bool has_static_boost, cvar *vars);



#endif
