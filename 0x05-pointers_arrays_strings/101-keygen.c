#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 100
#define CHECKSUM 2772

/**
 * generatePassword - A function that generates a random password and places it
 * inside an allocated variable named password.
 * @_sum: A pointer to a variable that keeps track of the generated password's
 * ASCII value sum.
 * Return: The allocated char* password.
 */
char *generatePassword(int *_sum) 
{
    const char alphanum[] =
        "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *password = malloc(PASSWORD_LENGTH + 1);
    int i, max_index = sizeof(alphanum) - 1;

    srand(time(NULL));
    for (i = 0; *_sum < CHECKSUM - 127 && i < PASSWORD_LENGTH; ++i) {
        password[i] = alphanum[rand() % max_index];
        *_sum += (int) password[i];
    }
    password[i] = '\0';
    return password;
}

/**
 * main - Entry point
 * Description: A program that generates a valid key for the program 101-crackme
 * Return: 0
 */
int main(void)
{
    int sum = 0;
    char *password = generatePassword(&sum);

    char difference[2] = {CHECKSUM - sum, '\0'};
    strcat(password, difference);

    printf("%s", password);

    free(password);
    return 0;
}

