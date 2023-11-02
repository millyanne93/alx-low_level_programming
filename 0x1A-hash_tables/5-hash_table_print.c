#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 *
 * @table: The hash table to print.
 */
void hash_table_print(const hash_table_t *table)
{
	hash_node_t *current_node;
	unsigned long int count = 0, first = 0;

	if (table != NULL)
	{
		printf("{");
		for (count = 0; count < table->size; count++)
		{
			current_node = table->array[count];
			while (current_node != NULL)
			{
				if (first != 0)
					printf(", ");
				first = 1;
				printf("'%s': '%s'", current_node->key, current_node->value);
				current_node = current_node->next;
			}
		}
		printf("}\n");
	}
}
