/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int myStrLength(char *word);
int isEqual(char *str, char *word);
int count_word_in_str_way_1(char *str, char *word){
	int i = 0, freq = 0, len = myStrLength(word);
	while (str[i] != '\0')
	{
		if (str[i] == word[0])
		{
			if (isEqual(&str[i], word) == 1)
				freq++;
		}
		i++;
	}
	return freq;
}
int myStrLength(char *word)
{
	int i = 0;
	while (word[i] != '\0')
		i++;
	return i;
}
int isEqual(char *str,char *word)
{
	for (int i = 0; word[i] != '\0'; i++)
	{
		if (str[i] != word[i])
			return 0;
	}
	return 1;
}
int count_word_int_str_way_2_recursion(char *str, char *word){
	if (str[0] == '\0')
		return 0;
	if (str[0] == word[0])
	{
		if (isEqual(&str[0], word) == 1)
			return 1 + count_word_in_str_way_1(str + 1, word);
		else
			return count_word_in_str_way_1(str + 1, word);
	}
	else
		return count_word_in_str_way_1(str + 1, word);
	return 0;
}


