#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_result;
	char c;

	hash_result = 5381;
	for (; *str != '\0'; str++)
		hash_result = ((hash_result << 5) + hash_result) + *str; /* hash * 33 + c */
	return (hash_result);
}
