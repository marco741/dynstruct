/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tqueue.h
 * Author: marco
 *
 * Created on 15 ottobre 2018, 13.41
 */

#ifndef TQUEUE_H
#define TQUEUE_H

#include "tinfo.h"
#include "tarray.h"

struct SQueue {
    int n; // numero di elementi
    int f; // indice front
    int b; // indice back
    TArray a; 
};
typedef struct SQueue TQueue;

TQueue queueCreate ();
void queueDestroy (TQueue*);
void queueAdd (TQueue*, TInfo);
TInfo queueRemove (TQueue*);
TInfo queueFront (TQueue*);
int queueIsEmpty (TQueue*);

#endif 


