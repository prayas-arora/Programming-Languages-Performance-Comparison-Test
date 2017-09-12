#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    clock_t begin, end;
     double cpu_time_used;
     
    FILE *fptr1, *fptr2;
    char *filename;
    char c;
 //-----------------------------------------------------------------------------------
    begin = clock();
    filename = "1GB_FILE.txt";
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
 
    filename = "copy_1GB_FILE.txt";
 
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
 
    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
 
    end = clock();
    cpu_time_used = ((double) (end - begin)) / CLOCKS_PER_SEC;
    printf("\nContents copied to %s", filename);
    printf("\nCopy Time: %f",cpu_time_used);

 
    fclose(fptr1);
    fclose(fptr2);

//-----------------------------------------------------------------------------------
    begin = clock();
    filename = "2GB_FILE.txt";
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
 
    filename = "copy_2GB_FILE.txt";
 
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
 
    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
 
    end = clock();
    cpu_time_used = ((double) (end - begin)) / CLOCKS_PER_SEC;
    printf("\nContents copied to %s", filename);
	printf("\nCopy Time: %f",cpu_time_used);
 
    fclose(fptr1);
    fclose(fptr2);

//-----------------------------------------------------------------------------------
    begin = clock();
    filename = "3GB_FILE.txt";
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
 
    filename = "copy_3GB_FILE.txt";
 
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
 
    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
 
    end = clock();
    cpu_time_used = ((double) (end - begin)) / CLOCKS_PER_SEC;
    printf("\nContents copied to %s", filename);
    printf("\nCopy Time: %f",cpu_time_used);

    fclose(fptr1);
    fclose(fptr2);

//-----------------------------------------------------------------------------------

    begin = clock();
    filename = "4GB_FILE.txt";
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
 
    filename = "copy_4GB_FILE.txt";
 
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
 
    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
 
    end = clock();
    cpu_time_used = ((double) (end - begin)) / CLOCKS_PER_SEC;
    printf("\nContents copied to %s", filename);
    printf("\nCopy Time: %f",cpu_time_used);
    fclose(fptr1);
    fclose(fptr2);

//-----------------------------------------------------------------------------------
    begin = clock();
	filename = "5GB_FILE.txt";
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
 
    filename = "copy_5GB_FILE.txt";
 
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
 
    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
 
    end = clock();
    cpu_time_used = ((double) (end - begin)) / CLOCKS_PER_SEC;
    printf("\nContents copied to %s", filename);
    printf("\nCopy Time: %f",cpu_time_used);
    fclose(fptr1);
    fclose(fptr2);

//-----------------------------------------------------------------------------------


    return 0;
}