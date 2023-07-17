#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct describe a dog's info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: structure
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


typedef struct dog dog_t;

#endif
