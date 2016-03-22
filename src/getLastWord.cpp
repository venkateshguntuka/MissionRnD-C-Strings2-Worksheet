/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int strLength(char *str);
char * get_last_word(char * str){
	int length = 0;
	length = strLength(str);
	int i, pos = 0;
	for (i = length - 1; i>pos; i--)
	{
		if (str[i] == ' ')
		{
			pos = i + 1;
			break;
		}

	}

	char *result = (char *)malloc(sizeof(char)*(length - pos));
	int index = 0;
	for (i = pos; str[i] != '\0'; i++)
	{
		result[index] = str[i];
		index++;
	}
	result[index] = '\0';
	return result;
}
int strLength(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

