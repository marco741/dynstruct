/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tarray.h
 * Author: marco
 *
 * Created on 15 ottobre 2018, 13.40
 */

#ifndef TARRAY_H
#define TARRAY_H

#include "tinfo.h"
#define C_EXP 10 // costante di espansione
#define C_RED 20 // costante di riduzione

struct SArray {
    TInfo* items; // puntatore agli elementi dell'array
    int  length;  // lunghezza array    
    int  size;    // dimensione allocata (>= length)
};
typedef struct SArray TArray;

TArray arrayCreate (int);
void arrayDestroy (TArray*);
void arrayResize (TArray*, int);

#endif 