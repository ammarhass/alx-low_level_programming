#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"dog.h"

/**
 * new_dog - function that creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int len_1 = 0;
	unsigned int len_2 = 0;
	dog_t *ptr;

	len_1 = strlen(name);
	len_2 = strlen(owner);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * (len_1 + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (len_2 + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);
}
