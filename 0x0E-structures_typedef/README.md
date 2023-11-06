# 0x0E. C - Structures, typedef
The following were the learning objectives:
-   What are structures, when, why and how to use them
-   How to use  `typedef`

The following are files found in the directory and  here is what they do:
1. dog.h - a header file that has defined a new type  `struct dog`  with the following elements:
-   `name`, type =  `char *`
-   `age`, type =  `float`
-   `owner`, type =  `char *`
	It has also defined a new type `dog_t` as a new name for the type `struct dog`.
2. 1-init_dog.c - function that initialize a variable of type `struct dog`
3. 2-print_dog.c - function that prints a `struct dog`
4. 4-new_dog.c - function that creates a new dog.
5. 5-free_dog.c - function that frees dogs.