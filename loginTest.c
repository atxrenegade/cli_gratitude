#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
Harleigh Abel
Sept 8 2017
loginTest.c
Breakdown and testing of the login() for cli_gratitude */

int main()
{
  // allocate memory to create and store variables for username and password
  char *username = (char*) malloc(30*sizeof(char));
  char *password = (char*) malloc(30*sizeof(char));
  // prompt user to input username and store input	
  printf("Please enter your username: ");
  scanf(" %s", username);
  // prompt user to input password and store input	
  printf("Please enter your password: ");
  scanf(" %s", password);	
  // create hash of username and password
  // open file storing saved usernames and saved passwords
  // search database for username and password combo
  // compare user input username and password combo to stored hash key and hash value	
  /*if(strcmp(username, "user") == 0) && (strcmp(password, "default") == 0)
  {
    // confirm login if a match	  
    printf("Login successful");
    return;
  }
  else 
  {
    // error message if no match 
    // return to login prompts	  
    printf("Im sorry you username and/or password was incorrect!\n");
    //login();
    main();
  }
    // free allocated memory for user input username and password variables 	
    free(username);
    free(password);
  */
return;
}
