# 0x18. C - Dynamic libraries

The following were the learning objectives:
-   What is a dynamic library, how does it work, how to create one, and how to use it
-   What is the environment variable  `$LD_LIBRARY_PATH`  and how to use it
-   What are the differences between static and shared libraries
-   Basic usage  `nm`,  `ldd`,  `ldconfig`

The following are the files and their respective functions in this repository:
1. libdynamic.so, main.h - dynamic library libdynamic.so containing all the functions listed below:

```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
2. 100-operations.so - dynamic library that contains C functions that can be called from Python
3. 101-make_me_win.sh - shell script that is going to make us win.
