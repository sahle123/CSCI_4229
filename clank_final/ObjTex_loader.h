#ifndef OBJTEX_LOADER_H_INCLUDED
#define OBJTEX_LOADER_H_INCLUDED

/*
*   Sahle A. Alturaigi
*   Nov. 28th, 2013
*   Object and texture loader header file
*
*/

//  OpenGL with prototypes for glext
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include "glWindow_wrapper.h" // Needed for glWindowsPos()
#endif


//-----------------------------------------------------------------------------

//*** Loader Functions ***//

//*** End Loader Functions ***//

//*** Helper Functions ***//
//-----------------------------------------------------------------------------
static void Reverse(void* x, const int n)
{
    int k;
    char* ch = (char*)x;
    for(k = 0; k < n; ++k)
    {
        char tmp = ch[k];
        ch[k] = ch[n-1-k];
        ch[n-1-k] = tmp;
    }
}
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------


//*** End Helper Functions ***//

#endif // OBJTEX_LOADER_H_INCLUDED
