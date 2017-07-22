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

int main(void)
{
	greeting();
	menu();
	exit();

	return 0;
}


/*************************************************
*************************************************
**************  PROGRAM FUNCTIONS  **************
*************************************************
*************************************************/

// 
void greeting(); 
printf("Welcome to Daily Gratitude Application");
printf("Can you please tell me are you a new or exisiting user?(N = new)(E = Existing user)): ");
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
	printf("Your reply was not understood please choose (N for new user or E for Existing user)")
}
// validate user data, convert lower to upper, remove extra characters







// login();
// new_user();
// menu();
// save();
// printToScreen();
// sendToPrinter();
// newEntry();
// print();
// reviewEntry();
// exit();