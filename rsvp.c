//
//  main.c
//  sisweb1
//
//  Created by Jaycee Caesar Augustus Germanicus on 8/27/15.
//  Copyright (c) 2015 Jaycee Caesar Augustus Germanicus. All rights reserved.
//

#include <stdio.h>
#include "course.h"
#include "vector.h"
#include <stdlib.h>
int get_choice(int* choice);
void display_info(int *x,int*y,int*crn_array, char** subject_array,char** courses_array);


int main(int argc, const char * argv[]) {
    int choice;
    
    int count;
    
    
    int* crn_array;
    char** subject_array;
    char** courses_array;

    
    init (&crn_array,&subject_array,&courses_array);
    read_courses(&count,&crn_array,&subject_array,&courses_array);
    display_info(&choice,&count,crn_array,subject_array,courses_array);

    free(init);
    return 0;

}

int get_choice(int* choice){
    
    printf("RSVP Menu\n");
    printf("0. Done.\n");
    printf("1. Find by CRN.\n");
    printf("2. Find by subject.\n");
    printf("Your choice (0-2): ");
    scanf("%d",choice);
    //printf("You cant afford tuition anyways\n");
    if(*choice < 0 || *choice > 2)
    {
        printf("Your choice is outside the accpetable range. Please try again\n");
    }
    
    if(*choice == 0 )
        exit(1);
    
    return *choice;
}// get_choice


void display_info(int* choice,int* count,int* crn_array,char** subject_array, char** courses_array){
    
    do {
    
        get_choice(choice);
        find_CRN(choice,count,crn_array,subject_array,courses_array);
        find_subject(choice,count,crn_array,subject_array,courses_array);
        printf("\n");
    } while (*choice != 0);
    
}// display_info
