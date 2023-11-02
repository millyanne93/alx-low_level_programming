#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @table: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *table)
{
	hash_table_t *table_head = table;
	hash_node_t *current_node, *temp_node;
	unsigned long int index;

	for (index = 0; index < table->size; index++)
	{
		if (table->array[index] != NULL)
		{
			current_node = table->array[index];
			while (current_node != NULL)
			{
				temp_node = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = temp_node;
			}
		}
	}
	free(table_head->array);
	free(table_head);
}
