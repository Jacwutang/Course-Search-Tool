//
//  course.h
//  sisweb1
//
//  Created by Jaycee Caesar Augustus Germanicus on 8/27/15.
//  Copyright (c) 2015 Jaycee Caesar Augustus Germanicus. All rights reserved.
//

#ifndef COURSE_H
#define COURSE_H

#include <stdio.h>


void find_CRN(int* x,int* j,int*y,char** subject_array, char** courses_array);
void find_subject( int* x, int* z, int* crn_array, char** subject_array, char** courses_array);
void read_courses(int* count,int** crn_array,char*** subject_array, char*** courses_array);


//nt* choice,int* count, int* crn_array, char** subject_array, char** courses_array

#endif /* defined(__sisweb1__course__) */
