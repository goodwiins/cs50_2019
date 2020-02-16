#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>


int main(int argc,string argv[])
{

     if  (argc !=0)
     {
      printf("Usage: crack <hash>\n");
        return 1;
     }
     const int letters_count = 53;
     string letters = "\0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
     string hash = argv[1];
     char salt[3];
    memcpy(salt, hash, 2);
    salt[2] = '\0';

    char key_candidate[6] = "\0\0\0\0\0\0";
    for (int fifth = 0; fifth < letters_count; fifth++)
    {
        for (int fourth = 0; fourth < letters_count; fourth++)
        {
            for (int third = 0; third < letters_count; third++)
            {
                for (int second = 0; second < letters_count; second++)
                {

                    for (int first = 1; first < letters_count; first++)
                    {
                        key_candidate[0] = letters[first];  // 1)
                        key_candidate[1] = letters[second]; // 2)
                        key_candidate[2] = letters[third];  // 3)
                        key_candidate[3] = letters[fourth]; // 4)
                        key_candidate[4] = letters[fifth];  // 5)


                        if (strcmp(crypt(key_candidate, salt), hash) == 0)
                        {
                            printf("%s\n", key_candidate);
                            return 0;
                        }
                    }
                }
            }
        }










}