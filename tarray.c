/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdlib.h>
#include <assert.h>
#include "tarray.h"

TArray arrayCreate (int length) {
    TArray a;
    int size = length + C_EXP;
    a.items = malloc(size * sizeof(TInfo));
    assert (a.items != NULL);
    a.length = length;
    a.size = size; 
    return a;
}

void arrayDestroy (TArray *a) {
    free(a->items);
    a->items = NULL;
    a->length = 0;
    a->size = 0;
}

void arrayResize (TArray *a, int length) {
    if (length > a->size || length < a->size - C_RED) {
        int size = length + C_EXP;
        a->items = realloc(a->items, size * sizeof(TInfo));
        assert (a->items != NULL);
        a->size = size;        
    }
    a->length = length;
 }