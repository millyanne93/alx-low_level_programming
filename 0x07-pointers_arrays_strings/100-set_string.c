#include "main.h"
/**
 *  set_string - Sets the value of a pointer to a char
 *  @s: Pointer to a pointer to char
 *  @to: Pointer to the new string
 *  Return: 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
