//
//  main.c
//  dz2
//
//  Created by Slava Gubar on 2/21/17.
//  Copyright © 2017 Slava Gubar. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dk_tool.h"

int main(int argc, const char *argv[])
{
	DK_PhoneBook *theBook = createPhoneBook(10);
	char theName[] = "Viacheslav2";
	char thePhone[] = "1234567";
	
	addNoteToPhoneBook(theBook, "Viacheslav", "123456");
	addNoteToPhoneBook(theBook, theName, thePhone);
	
	DK_Note theNote = theBook->notes[1];
	
	printf("The second element: name - %s, phone - %s\n", theNote.name, theNote.phone);
	
	destroyPhoneBook(theBook);
	return 0;
}

