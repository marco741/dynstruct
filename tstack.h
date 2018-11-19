/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tstack.h
 * Author: marco
 *
 * Created on 15 ottobre 2018, 13.41
 */

#ifndef TSTACK_H
#define TSTACK_H

#include "tinfo.h"
#include "tarray.h"

struct SStack {
    TArray a;
};
typedef struct SStack TStack;

TStack stackCreate(void);
void stackDestroy(TStack*);
void stackPush(TStack*, TInfo);
TInfo stackPop(TStack*);
TInfo stackTop(TStack*);
int stackIsEmpty(TStack*);

#endif
