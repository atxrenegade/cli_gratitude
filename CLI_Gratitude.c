/*
Harleigh Abel
July 20 2017
CLI Gratitude App
This program a an application of personal interest to 
practice my C programming skills.  This program records 
a user's daily gratitude entries and stores them to be 
printed or reviewed later. It requires a username and password
to access stored entries. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

FILE * fptr; //Defines a file pointer

void greeting();
void newUser();
void login();
void menu();
void newEntry();
void test();
char* getTime();
void reviewEntry();


int main(void)
{
  //test();
  greeting();
  menu();
  
  return 0;
}


/*************************************************
*************************************************
**************  PROGRAM FUNCTIONS  **************
*************************************************
*************************************************/


void greeting()
{
  
  char user;
  printf("Welcome to Daily Gratitude Application\n\n\n");
  printf("Can you please tell me are you a new or existing user?\n\n(N = new user)(E = Existing user):  ");
  scanf(" %c", &user);
  user = toupper(user); 
  if (user == 'N')
  {
  	newUser();
  }
  else if (user == 'E')
  {
  	login();
  }
  else
  {
  	printf("Your reply was not understood please choose (N for new user or E for Existing user)");
  }
  // validate user data,void test()
}

/*******************************************************************/

void menu()
{
  char entry; 	
  // ***greet user by user name
  printf("\n\n\nWelcome User!!\n");
  printf("\nWould you like to enter a new entry? Or review an existing one?\n");
  printf("(N = new entry)(R = review existing entry)(X = exit): ");
  scanf(" %c", &entry); 
  entry = toupper(entry);
	
  if (entry == 'N')
  {
    // *********** printf("test-1");
  	newEntry();
  }
  else if (entry == 'R')
  {
  	reviewEntry();
  }
  else if (entry == 'X')
  {
  	return;
  }		
  else
  {
  	printf("Im sorry I did not understand your response!");
	  void menu();  
  }
}
/**********************************************************************/
void test()
{
char ans;
  scanf(" %c", &ans);
  ans = toupper(ans);
  if (ans == 'Y') 
  { 
    printf("Test Y");
  }
  else if(ans == 'N')
  {
    printf("Test N");
  }
  else
  {
    printf("error");
  }
}
/******************************************************************/


/****************************************************************/
void login()
{


}


/*******************************************************************/
void newUser()
{
  
  
}
/*******************************************************************/

void newEntry()
// function creates new entry and writes to dated file
{
  // allocate memory for entry date  
  char *entryDate = (char*) malloc(28*sizeof(char));
  // copy return value of getTime() current local time into entryDate variable
  strcpy(entryDate, getTime());
  // test 
  printf(" %s", entryDate);
  // *****************printf("Test0");
  //int i;
  
 
  // char entry_time;
  // *****************printf("test1");
 /* struct userEntry {
    char am_pm[3];
    char item1[1000];
    char item2[1000];
    char item3[1000];
    char item4[1000];
    char item5[1000];
  }; 
  
  
  struct userEntry entry[1];
 
	
	
  fptr = fopen("C:/Users/Harleigh Abel/gratitude.txt", "w");
  // Test to ensure file is open
  if (fptr == 0)
  {
   printf("Error--file could not be opened.\n");
   exit (1);
  }
  printf(" Okay User, Let's get started! Is this your AM or PM entry?");
  
  printf("\n\nEnter AM or PM: ");
  fprintf(" %s", entry_time);
  fgets(fptr, entry.am_pm);
  fprintf(fptr, "Please Describe 5 things you were grateful about today.\n");
  fprintf(fptr, "Include why you were grateful and how it made you feel.\n");
  int ctr;
  for(ctr = 1; ctr < 5; ctr++)
  {
    fprintf(fptr, "%d: ", ctr);
    fgets(fptr, entry.item[ctr]);
  }  
 
  fclose(fptr);
  return;
  // name file by date and am/pm
*/
  free(entryDate);
}

/*****************************************************************/

void reviewEntry()
{
  
  
  
}
/*****************************************************************/

char* getTime()
{   
  // ******************* printf("test2");
    time_t current_time;
    char* c_time_string;

    /* Obtain current time. */
    current_time = time(NULL);

    if (current_time == ((time_t)-1))
    {
        (void) fprintf(stderr, "Failure to obtain the current time.\n");
        exit(EXIT_FAILURE);
    }

    /* Convert to local time format. */
    c_time_string = ctime(&current_time);

    if (c_time_string == NULL)
    {
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
    }
    return(c_time_string);
  
}




// save(); Don't really need this if I am writing to file
// printToScreen();
// sendToPrinter(); 
// print(); PrintToScreen || sendToPrinter
// reviewEntry(); > list entries by date with number
