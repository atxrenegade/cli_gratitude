/*
Harleigh Abel
Sept 7 2017
sendToPrinterTest.c
Breakdown and testing of the sendToPrinter() for cli_gratitude */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    // what function calls print? reviewEntry && newEntry && printEntry()
    // define variable to store user input
    char answer;
    //******************debug while loop
 
	//  prompt user for input      
      	printf("Would you like to print your current entry? Y/N: ");
	    
    	scanf(" %c", &answer);
	     
    	answer = toupper(answer);
      }
    while (answer == "Y") && (answer == "N");

    if (answer == "Y")
    {
      // send file to printer
      printf("Your file has been sent to printer!");
    }
    else if (answer == "N")
    {
      return;
    }
    else
    {
	// return error code if user input not valid    
    	printf("program error*** error code-2");
    	// sendToPrinter()
    	main(); //delete after test
    }
return;
}


// pass newEntry data struct to function
