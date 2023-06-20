#ifndef _MAIN_H_
#define _MAIN_H_

/* File: none */
int _putchar(char c);

/* File: puts.c */
void _puts(char *s);

/* File: character_checks.c */
int _islower(int c);
int _isalpha(int c);
int _isupper(int c);
int _isdigit(int c);

/* File: conversion.c */
int _abs(int n);
int _atoi(char *s);

/* File: string_operations.c */
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);

/* File: string_search.c */
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_strstr(char *haystack, char *needle);

/* File: memory_operations.c */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

#endif
