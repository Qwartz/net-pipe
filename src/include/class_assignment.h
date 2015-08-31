/*!
 * \file class_assignment.h
 * \brief Class assignment for changing internal functions
 * \details This takes current functions running and can access and modify members and active threads on the fly.
 * \author Corbin Matschull
 * \version 1.1r2
 * \date Aug 28. 2015
 * \pre Must have at least one currently active (non-sleeping) thread to run
 * \throw THREAD_NOT_FOUND_EXCEPTION
 * \copyright Apache Version 2
 */
#ifndef CLASS_ASSIGN_H_
#define CLASS_ASSIGN_H_

/**
 * \brief Class assignment flags.
 */
enum CLASS_ASSIGNMENTS
{
    CLASS_FORCE_ASSIGNMENT = 0, /**< Forces assignment to class */
    CLASS_HAS_NO_ASSIGNMENT, /**< Throws when class has no assignment */
    CLASS_KEEPS_ASSIGNMENT, /**< Keeps assignment under all costs */
    CLASS_DUMP_ASSIGNMENT /**< Dumps under first sign of trouble */
};


#endif
