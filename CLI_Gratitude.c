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
  printf("Welcome User!!\n");
  printf("Would you like to enter a new entry? Or review an existing one?\n");
  printf("(N = new entry)(E = review exisitng entry)(X = exit): ");
  scanf(" %c", &entry); 
  entry = entry(toupper);
	
  if (entry == 'N')
  {
  	void newEntry();
  }
  else if (entry == 'E')
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




// save();
// printToScreen();
// sendToPrinter();
// newEntry();
// print();
// reviewEntry();
