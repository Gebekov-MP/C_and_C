#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"

#define STUDENTS 3

int main(void)
{
    student students[STUDENTS];
    for (int i =0; i < STUDENTS; i++)
    {
        students[i].name = get_string("Students name: ");
        students[i].dorm = get_string("Students dorm: ");
    }
    
    FILE* file = fopen("students.csv", "w");
    if (file != NULL)
    {
        for (int i = 0; i < STUDENTS; i++)
        {
            fprintf(file, "%s, %s\n", students[i].name, students[i].dorm);
        }
        fclose(file);
    }
    for (int i = 0; i < STUDENTS; i++)
    {
        free(students[i].name);
        free(students[i].dorm);
    }
}
    
            
 