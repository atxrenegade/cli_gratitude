/*
Harleigh Abel
July 20 2017
CLI Gratitude App
This program is an application of personal interest to 
practice my C programming skills.  This program records 
a user's daily gratitude entries and stores them to be 
printed or reviewed later. It requires a username and password
to access stored entries. */
#define _XOPEN_SOURCE 500


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


FILE * fptr; //Defines a file pointer

// function prototypes

void greeting(); 
void newUser();
void login();
void menu();
void newEntry();
char* getTime();
void reviewEntry();
void sendToPrinter();
// void test();


int main(void)
{
  // greets user 	
  printf("Welcome to Daily Gratitude Application\n\n\n");	
  //determines if user is new or existing
  greeting();
  // once user has logged in, or created a new account 
  // this function determines whether the user would like to review 
  // an exisiting entry, create a new one, or exit the program
  menu();
  
  // terminates program
  return 0;
}


/*************************************************
*************************************************
**************  PROGRAM FUNCTIONS  **************
*************************************************
*************************************************/

// function greets user and determines in new or existing user
// initiates newUser() or login() for existing user depending
// on user input
void greeting()
{
  char user; // variable for user status new or existing
  printf("Can you please tell me are you a new or existing user?\n\n(N = new user)(E = Existing user):  ");
  // gets user status input
  scanf(" %c", &user);
  // converts lowercase input to uppercase
  user = toupper(user); 
  if (user == 'N')
  {
    // initiates newUser() to create new user account
  	//newUser();
  }
  else if (user == 'E')
  {
    // initiates login() to login existing user;
  	// login();
  }
  else
  {
    // produces error message for invalid input
  	printf("Your reply was not understood please choose a correct response.\n\n");
  	greeting();
  } 
}

/*******************************************************************/
   
void menu()
  /* once user has logged in, or created a new account 
     this function determines whether the user would like to review 
     an exisiting entry, create a new one, or exit the program */
{
  char entry; 	
  // ***greet user by user name - to be added once newUser() has been created
  printf("\n\n\nWelcome User!!\n");
  printf("\nWould you like to enter a new entry? Or review an existing one?\n");
  printf("(N = new entry)(R = review existing entry)(X = exit): ");
  // gets user input to determine action 
  scanf(" %c", &entry); 
  // converts user input to uppercase
  entry = toupper(entry);
	
  if (entry == 'N')
  {
  	// initiates newEntry() to write new entry to file
  	newEntry();
  }
  else if (entry == 'R')
  {
    // initiates reviewEntry() to open existing file
  	reviewEntry();
  }
  else if (entry == 'X')
  {
    // returns to main to exit program
  	return;
  }		
  else
  {
    // warns user of invalid data entry and returns to menu() to request input
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
/****************************************************************/
void login()

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
    login();
  }
    // free allocated memory for user input username and password variables 	
    free(username);
    free(password);
  */
}


/*******************************************************************/
void newUser()
{
  // declare vairable for usename and password	
  char* username[30];	
  char* password[30];
  // greet user 	
  printf("Hello, New User!\nPlease select a username for yourself: ");
  // get username	
  scanf(" %s", username);
  printf("\nGreat!\nNow please select a password with at least one letter, one number, and one special character: ");	
  scanf(" %s", password);
  // validate password 
  // store password if acceptable
  // open or create new document to store user names and passwords hashes	
  printf("\n\nWelcome to Daily Gratitude %s!", &username);
  // send new user to menu
  menu();
}
/*******************************************************************/
void newEntry()
// function creates new entry and writes to dated file
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
  /* printf(" Okay User, Let's get started! Is this your AM or PM entry?");
  
  printf("\n\nEnter AM or PM: ");
  fprintf(" %s", entry_date);
  fgets(fptr, entry.am_pm);
  fprintf(fptr, "Please Describe 5 things you were grateful about today.\n");
  fprintf(fptr, "Include why you were grateful and how it made you feel.\n");
  int ctr;
  for(ctr = 1; ctr < 5; ctr++)
  {
    fprintf(fptr, "%d: ", ctr);
    fgets(fptr, entry.item[ctr]);
  }  
*/
  // give the user the option to print the entry	
  sendToPrinter();	
  // close file
  fclose(fptr);
  // free allocated memory	
  free(entry_date);
 // return to main function	
  return;
}

/*****************************************************************/
void reviewEntry()
{
  int entry_number;
  char answer;
  // open file with previous entries	
  printf("Here is a list of your previous entries.\n");
  printf("Please select which number you would like to review; ");
  // scan file for previous entry dates
  // output to stadard output a number list of entry dates
  printf("Please select which number you would like to review; ");	
  scanf(" %s", &entry_number);
  // scan file for entry
  // return entry to screen
  // give the user the option to print the entry	
  sendToPrinter();	
  printf("Would you like to review another entry? Y/N): ");
  scanf(" %c", &answer);	
  answer = toupper(answer);
	 if (answer == 'Y') 
  { 
    reviewEntry();
  }
  else if(answer == 'N')
  {
    return;
  }
  else
  {
    // build this into a while loop	  
    printf("Please Enter a Valid Selection!");
  }
}
/*****************************************************************/
char* getTime()
{   
  // ******************* printf("test2");
  // declared variables for time_t and current_time		
    time_t current_time;
  //**********************printf(test3");
    // create a pointer vaiable to store current time and return to newEntry()	
    char* c_time_string;

    // Obtain current time. 
    current_time = time(NULL);
    // checks to see if current_time is valid returns error message if not
    if (current_time == ((time_t)-1))
    {
        (void) fprintf(stderr, "Failure to obtain the current time.\n");
        exit(EXIT_FAILURE);
    }

    // Convert to local time format.
    c_time_string = ctime(&current_time);

    if (c_time_string == NULL)
    {
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
    }
    return(c_time_string);
}

/**********************************************************************************************************/
void sendToPrinter()
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
    	sendToPrinter(); //delete after test
    }
}
