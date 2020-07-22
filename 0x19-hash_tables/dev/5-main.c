#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Bootcamp School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Jennie", "and Jay love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Bootcamp");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "98", "Bumper road");
    hash_table_set(ht, "hetairas", "can you catch em all?");
    hash_table_set(ht, "mentioner", "This is a secret");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
