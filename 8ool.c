#include "8ool.h"

#include <stdlib.h>


///
//Allocates a character to use as 8 booleans
//
//Returns:
//	pointer to character to be used as 8 bools
unsigned char* ool_Allocate()
{
	unsigned char* ool = malloc(sizeof(char));
	return ool;
}

///
//Initializes a character to use as 8 booleans
//
//Parameters:
//	ool: pointer to character representing 8 booleans
void ool_Initialize(unsigned char* ool)
{
	*ool = 0;
}

void ool_Free(unsigned char* ool)
{
	free(ool);
}

///
//Gets the boolean at spot index out of the character representing 8 booleans
//
//Parameters:
//	ool: Pointer to character representing 8 booleans
//	index: The index of the boolean to get [0-7] 
unsigned char ool_GetIndex(unsigned char* ool, unsigned char index)
{
	return *ool & (1 << index);
}

///
//Toggles a boolean at spot index in a character representing 8 booleans
//
//Parameters:
//	ool: pointer to character representing 8 booleans
//	index: the index of the boolean to toggle
void ool_ToggleIndex(unsigned char* ool, unsigned char index)
{
	*ool ^= (1 << index);
}
