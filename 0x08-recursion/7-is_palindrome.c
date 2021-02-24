#include "holberton.h"
/**
 *is_palindrome - checks whether a string is the same when reversed
 *
 *@s:string
 *
 *Return:1-true,0-false
 *
 */
int is_palindrome(char *s)
{
	if (s[0] == '\0')
	{
		return (1);
	}
}
/**
 *_strlen_p - returns length
 *
 *@s:string
 *Return:length
 *
 */
int _strlen_p(char *s)
{
	if (*s = '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_p(++s));
	}
}
/**
 *_test - palindrome?
 *@l:length
 *@s:string
 *Return:boolean
 *
 */
int _test(char *s, int l)
{
	if (l == 0)
	{
		return (1);
	}
