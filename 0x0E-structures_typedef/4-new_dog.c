#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - return length of a string
 * @s: variable used
 * Return: 0
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

/**
 * _strcpy - function to copy string from source to destination
 * @dest: pointer to destinatioin of string to be copied
 * @src: pointer to source of string to be copied
 * Return: value at dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * *new_dog - function to create new dog struct
 * @name: character used
 * @age: float used
 * @owner: character used
 * Return: Always success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	newd->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newd->name == NULL)
	{
		free(newd);
		return (NULL);
	}
	newd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newd->owner == NULL)
	{
		free(newd->owner);
		free(newd);
		return (NULL);
	}

	newd->name = _strcpy(newd->name, name);
	newd->age = age;
	newd->owner = _strcpy(newd->owner, owner);

	return (newd);
}

