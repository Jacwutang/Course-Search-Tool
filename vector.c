//
//  vector.c
//  sisweb1
//
//  Created by Jaycee Caesar Augustus Germanicus on 8/27/15.
//  Copyright (c) 2015 Jaycee Caesar Augustus Germanicus. All rights reserved.
//

#include "vector.h"
#include <stdlib.h>
#include <stdio.h>


void init(int** crn_array,char*** subject_array, char*** courses_array){
    
    
    
    *subject_array = (char **) malloc (100*sizeof(char*));
    *courses_array = (char **) malloc (100*sizeof(char*));
    *crn_array     = (int*) malloc (100*sizeof(int));
    
    
    for(int i = 0; i<100; i++){
        (*subject_array)[i] = (char*) malloc(4*sizeof(char));
        (*courses_array)[i] = (char*) malloc (6*sizeof(char));
    }


} // assignment requires a triple pointer, but its trivial at best. allocated a dynamic 2d array


