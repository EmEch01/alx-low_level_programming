0x0B. C - malloc, free

0. Float like a butterfly, sting like a bee
Write a function that creates an array of chars, and initializes it with a specific char.

Prototype: char *create_array(unsigned int size, char c);
Returns NULL if size = 0
Returns a pointer to the array, or NULL if it fails
The function takes two arguments: size, which is the size of the array to be created, and c, which is the characterto initialize the array with. If size is 0, the function returns NULL. Otherwise, it allocates memory for the arrayusing malloc, initializes each element of the array with c, and returns a pointer to the array. If malloc fails to allocate memory, the function also returns NULL.
To create an array of chars using malloc, you need to:
1. Declsre a pointer to a char array.
2. Allocate memory for the array using malloc
3. Initialize the array element as needed.

The woman who has no imagination has no wings
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

Prototype: char *_strdup(char *str);
The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the newstring is obtained with malloc, and can be freed with free.
Returns NULL if str = NULL
On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memorywas available.

####[3. If you even dream of beating me you'd better wake up and apologize](3-alloc_grid.c)

- Write a function that returns a pointer to a 2 dimensional array of integers.

- Prototype: int **alloc_grid(int width, int height);
- Each element of the grid should be initialized to 0
- The function should return NULL on failure
- If width or height is 0 or negative, return NULL

4. It's not bragging if you can back it up
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

Prototype: void free_grid(int **grid, int height);
Note that we will compile with your alloc_grid.c file. Make sure it compiles.

It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
#advanced
Score: 0.0% (Checks completed: 0.0%)
Write a function that concatenates all the arguments of your program.

Prototype: char *argstostr(int ac, char **av);
Returns NULL if ac == 0 or av == NULL
Returns a pointer to a new string, or NULL if it fails
Each argument should be followed by a \n in the new string

I will show you how great I am
Write a function that splits a string into words.

Prototype: char **strtow(char *str);
The function returns a pointer to an array of strings (words)
Each element of this array should contain a single word, null-terminated
The last element of the returned array should be NULL
Words are separated by spaces
Returns NULL if str == NULL or str == ""
If your function fails, it should return NULL
