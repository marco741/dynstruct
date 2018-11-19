/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "tstack.h"

TStack stackCreate(void) {
    TStack s;
    s.a = arrayCreate(0);
    return s;
}

void stackDestroy(TStack *s) {
    arrayDestroy(&s->a);
}

void stackPush(TStack *s, TInfo x) {
    arrayResize(&s->a, s->a.length+1);
    s->a.items[s->a.length-1] = x;
}

TInfo stackPop(TStack *s) {
    TInfo x = s->a.items[s->a.length-1];
    arrayResize(&s->a, s->a.length-1);
    return x;
}

TInfo stackTop(TStack *s) {
    return s->a.items[s->a.length-1];
}

int stackIsEmpty(TStack *s) {
    return s->a.length == 0;
}