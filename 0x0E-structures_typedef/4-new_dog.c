#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * _memcpy - copies memory area
 * @dest: Pointer to destination memory area
 * @src: Pointer to source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * *new_dog - Creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: Pointer to new dog,
 * NULL - if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;

	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* allocate memory for name of dog and copy */
	name_len = _strlen(name) + 1;
	new_dog->name = malloc(sizeof(char) * name_len);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_memcpy(new_dog->name, name, name_len);

	/* allocate memory for owner and copy */
	owner_len = _strlen(owner) + 1;
	new_dog->owner = malloc(sizeof(char) * owner_len);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_memcpy(new_dog->owner, owner, owner_len);

	/* set age of dog */
	new_dog->age = age;

	return (new_dog);

}
