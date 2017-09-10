/*
Harleigh Abel
Sept 9 2017
newUserTest.c
Breakdown and testing of the newUsery() for cli_gratitude */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(void)
{
  char* username[30];	
  char* password[30];
  printf("Hello, New User! Please select a username for yourself: ");
  scanf(" %s", username);
  printf("Now Please select a user password inclduing at least one letter, one number, and one special character: ");
  // validate password 
  // store password if acceptable	
  scanf(" %s", password);	 
  // open or create new document to store user names and passwords hashes	
  printf(" Welcome to Daily Gratitude %s!", &username);
  // return username to main function	
}


// review encryption and storing hashes, searching documents 
