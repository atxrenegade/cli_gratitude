/*
Harleigh Abel
Sept 7 2017
sendToPrinterTest.c
Breakdown and testing of the sendToPrinter() for cli_gratitude */
#define _XOPEN_SOURCE 500

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    // what function calls print? reviewEntry && newEntry && printEntry()
    
    // define variable to store user input
    char answer;
	//  prompt user for input      
      	printf("Would you like to print your current entry? Y/N: ");
	// get user input    
    	scanf(" %c", &answer);
	// convert input to capital letters     
    	answer = toupper(answer);

    if (answer == 'Y')
    {
      FILE *my_printer = popen("/dev/usb/lp0", "w"); 
      fprintf(my_printer, "Printer test - Integer: %d, Float: %lf, String: %s",123,3.14,"Test string");
      pclose(my_printer); 
      // send file to printer
      printf("Your file has been sent to printer!\n");
    }
    else if (answer == 'N')
    {
      //do nothing;
    }
    else
    {
	// return error code if user input not valid    
    	printf("program error*** error code-2\n");
    	// sendToPrinter()
    	main(); //delete after test
    }
  return 0;
}
