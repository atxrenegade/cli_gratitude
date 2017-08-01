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

void greeting();
void newUser();
void login();
void menu();
void exitProgram();
void newEntry();
void test();

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
  	void newEntry();
  }
  else if (entry == 'R')
  {
  	void reviewEntry();
  }
  else if (entry == 'X')
  {
  	void exitProgram();
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
void exitProgram()
{
 
}

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
{
   struct userEntry {
    char time_of_day[30];  
    char am_pm[3];
    char item_1[1000];
    char item_2[1000];
    char item_3[1000];
    char item_4[1000];
    char item_5[1000];
  }; 
  
  
  struct userEntry entry[1];
    struct tm str_time;
		time_t time_of_day;

		str_time.tm_year = 2100-1900;
		str_time.tm_mon = 6;
		str_time.tm_mday = 5;
		str_time.tm_hour = 10;
		str_time.tm_min = 3;
	
		time_of_day = mktime(&str_time);

  printf(" Okay User, Let's get started! Is this your AM or PM entry?");
  printf("Enter AM or PM: ");
  gets(entry.am_pm);
  printf("Please Describe 5 things you were grateful about today.\n");
  printf("Include why you were grateful and how it made you feel.\n");
  printf("1: ");
  gets(entry.item_1);
  printf("2: ");
  gets(entry.item_2);
  printf("3: ");
  gets(entry.item_3);
  printf("4: ");
  gets(entry.item_4);
  printf("5: ");
  gets(entry.item_5);
  
  // add function and header file to record current time
  // refactor entry_item loop and iterate through iterate
  // open and write to file
  // name file by date and am/pm
}




// save();
// printToScreen();
// sendToPrinter();
// newEntry();
// print();
// reviewEntry();
