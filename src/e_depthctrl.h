
#include "object.h"

#ifndef E_DEPTHCTRL_H
#define E_DEPTHCTRL_H

extern int depthctrl_selected(void);

void redisplay_object(F_line* p, int type);
void offset_compound_depth(F_compound *p, int offset);
void bringtofront(F_line* p, int type);
void sendtoback(F_line* p, int type);
void adjustdepth(F_line* p, int type);

#endif

// #taskSendBack_newFiles
//------------------------------- Instructions Start Here -------------------------------
/* INFO: This file make the new functions avaliable to use inside other files.         */
//-------------------------------- Instructions End Here --------------------------------