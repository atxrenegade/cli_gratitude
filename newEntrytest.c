/*
Harleigh Abel
Sept 6 2017
newEntrytest.c
Breakdown and testing of the newEntry() for cli_gratitude */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// pass user value from login() || newUser() to this function
int main(void)
{
  // allocate memory for entry date  
  char *entry_date = (char*) malloc(28*sizeof(char));
  // copy return value of getTime() current local time into entryDate variable
  strcpy(entry_date, getTime());
  // test 
  printf(" %s", entry_date);

  
/*  int i;
    char* struct user_entry {
    char am_pm[3];
    char item1[1000];
    char item2[1000];
    char item3[1000];
    char item4[1000];
    char item5[1000];
  }; 
  
  struct user_entry entry[1];
 */
	
  // open or create file to write or appehend to	
  fptr = fopen("C:/Users/Harleigh Abel/gratitude.txt", "a");
  // Test to ensure file is open return error message if fopen failed
  if (fptr == 0)
  {
   printf("Error--file could not be opened.\n");
   exit (1);
  }
  printf(" Okay User, Let's get started! Is this your AM or PM entry?");
  
  printf("\n\nEnter AM or PM: ");
  fprintf(" %s", entry_date);
  fgets(fptr, entry.am_pm);
  fprintf(fptr, "Please Describe 5 things you were grateful about today.\n");
  fprintf(fptr, "Include why you were grateful and how it made you feel.\n");
  int ctr;
  for(ctr = 1; ctr <= 5; ctr++)
  {
    fprintf(fptr, "%d: ", ctr);
    fgets(fptr, entry.item[ctr]);
  }  
  //sendToPrinter(); *******remove comment marks when placed back in main program;

  // close file
  fclose(fptr);
  // free allocated memory	
  free(entry_date);
 // return to main function	
  return;
}


// review data structures, review pointers, review scanf vs fgets
