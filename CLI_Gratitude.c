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

void greeting();
void newUser();
void login();
void menu();
void exitProgram();
void newEntry();

int main(void)
{
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
  user = toupper(user); // validate user data, convert lower to upper, remove extra characters
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
  // validate user data, convert lower to upper, remove extra characters
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
  char am_pm[3];
  char item_1[1000];
  char item_2[1000];
  char item_3[1000];
  char item_4[1000];
  char item_5[1000];
  
  printf(" Okay User, Let's get started! Is this your AM or PM entry?");
  printf("Enter AM or PM: ");
  scanf(" %c", am_pm);
  printf("Please Describe 5 things you were grateful about today.\n");
  printf("Include why you were grateful and how it made you feel.\n");
  printf("1: ");
  scanf(" %c", item_1);
  printf("2: ");
  scanf(" %c", item_2);
  printf("3: ");
  scanf(" %c", item_3);
  printf("4: ");
  scanf(" %c", item_4);
  printf("5: ");
  scanf(" %c", item_5); 
}

// save();
// printToScreen();
// sendToPrinter();
// newEntry();
// print();
// reviewEntry();
