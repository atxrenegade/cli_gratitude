﻿Command Line Gratitude App Brainstorm, Blueprint, and Pseudocode

1. Written in C or Ruby?
2. Records 2 entries per day AM and PM
3. Dates each entry
4. Accepts five line items per date
5. Saves entries to file
6. Allows entries to be reviewed or printed
7. Can review entries by date or the entire file
8. Can output to screen or print

*Optional functions include a daily alert, and password recovery,
and editEntry()


Functions

greeting(): greets user > new_user || log_in_existing
login(): logs in existing user
newUser(): Creates new user profile with username and password
menu(): ask user which task to perform newEntry() || reviewEntry() entries
save(): saves entry to file
printToScreen(): prints selected entry to screen
sendToPrinter(): sends file to print spool
newEntry(): collects and records new entry, gives option to print() or save()
print(): option to printToScreen() || sendToPrinter()
reviewEntry(): locates previous entry and prints to screen
exit(): closes any open files and exits program

if new_entry == open, option to SAVE or PRINT
if past_entry == open, option to PRINT

Pseudo Code
1. greet user
2. ask if user if they are new or existing
3. a. if newuser == true
	i. ask for username 
	ii. store username
	iii. ask for password
	iv. store password
   b. if new_user == false
    i. prompt user for username
    ii. prompt user for password
    ii. verify username
    iii. verify password
    	if username == true
    	 menu()
    	if username == false
    		tell user login information is incorrect 
    		return to step 2

4. display user menu(): newEntry || reviewEntry
	a. newEntry 
		i. prompt user for entry input
		ii. prompt user for AM or PM 
		iii. record user entry
		iv. record entry date and time
		v. save user entry to file
		vi. displays option print() || reviewEntry || exit()

	b. reviewEntry 
		i. display list of previous entries by date and time, 
		with each entry numbered chronologically
		ii. prompt user for selection
		iii. display user selection
		iv. ask user if it would like to print() or exit()

5. exit(): closes file exits program

*** Don't forget to include saveFile()
