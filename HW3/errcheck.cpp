/*
 *  Check for OpenGL errors
 */
#include "HW3.h"

void ErrCheck(const char* where)
{
   int err = glGetError();
   if (err) fprintf(stderr,"ERROR: %s [%s]\n",gluErrorString(err),where);
}
