#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 *
 * @table: The hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *table, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (key == NULL || table == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, table->size);
	node = table->array[index];
	for (; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}
