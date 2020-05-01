//saves names and numbers to a CSV file

#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    //open CSV file 
    FILE *file = fopen("phonebook.csv", "a");
    if (!file)
    {
        return 1;
    }
    //get name and number
    string name = get_string("name: ");
    string number = get_string("number: ");
    //print to file
    fprintf(file,"%s, %s", name, number);
    //closw file
    fclose(file);
}


