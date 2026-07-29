#include "hash_tables.h"

/**
 * key_index - Function that gives me the index of a key
 * @key: points to the string
 * @size: Size of the hashtable
 * Return: The return statement takes your key, turns it into a big number
 * using the hash function, and then makes sure that number fits inside the
 * hash table by using the % (modulo) operator. This way, you always get a
 * valid spot (index) in the table for your key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
