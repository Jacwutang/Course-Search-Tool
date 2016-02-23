

#include "course.h"
#include "vector.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

void find_CRN(int* choice,int* count,int* crn_array, char** subject_array, char** courses_array) {
    
    int crn;
    int counter = 0;
    
    if( *choice == 1)
    {
        printf("Please enter a CRN: ");
        scanf("%d",&crn);
    }
    
    
    for( int i = 0; i<(*count);i++){
        
        if(crn == crn_array[i])
        {
            printf("%s %s\n",subject_array[i],courses_array[i]);
            counter++;
        
        }
    }
    
    if(counter == 0 && *choice ==1)
        printf("CRN %d not found.\n", crn);
    
}// find_CRN

void find_subject(int* choice,int* count, int* crn_array, char** subject_array, char** courses_array){
    
    char *subject[1];
    
    int counter = 0;
    int count2 = *count;
    
    
    if (*choice == 2)
    {
        printf("Please enter a subject: ");
        scanf("%s",*subject);
    }
   
    
        for(int i= 0; i<count2; i++){
        
            if( strcmp(*subject,subject_array[i]) == 0)
            {
                printf("%d %s %s\n", crn_array[i],subject_array[i],courses_array[i] );
                counter ++;
            }
        
        } // for loop


    if(counter == 0 && *choice ==2)
        printf("No courses were found for %s.\n", *subject);


} // find_subject()

void read_courses(int* count,int** crn_array,char*** subject_array, char*** courses_array) {
    
    char line[256]; char* ptr;
    int crn_number; char* carrot;
    
    
    FILE *fp;
    fp = fopen("sisweb1.txt","r");
    if (fp == NULL)
    {
        exit(1);
    }
    
    
    init(crn_array,subject_array,courses_array); // initialize dynamic 2d array
    
    
    
    while(fgets(line,256,fp)) {
    
        if(isdigit (line[0]) != 0)
        {
        
            if(line[6] == '^')
            {
            carrot = strchr(line,' ');
            *carrot = '\t';
        
            carrot = strchr(line,'^');
            *carrot = '\t';
            
            carrot = strchr(line,' ');
            *carrot = '\t';
            }
        
        ptr = strtok(line," \t");
        crn_number = atoi(ptr);
        (*crn_array)[*count] = crn_number;
        
        strcpy((*subject_array)[*count],strtok(NULL," \t"));
        strcpy((*courses_array)[*count],strtok(NULL," \t"));
        
        (*count)++;
        
        } // if
    
    } // while
    
} // read_courses 





