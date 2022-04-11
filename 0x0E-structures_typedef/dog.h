#ifndef DOG_H
#define DOG_H
/**
 * struct dog -  type of def
 * @name: character used
 * @age: float used
 * @owner: character used
 *
 * *Description: structure to store dog info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
