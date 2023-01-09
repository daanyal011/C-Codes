#include <stdio.h>
#include <string.h>
int main()
{
  char str[150];
  int i, spaces, digits, vowels, consonants;
  spaces = 0;
  digits = 0;
  vowels = 0;
  consonants = 0;
  printf("Enter string: ");
  gets(str);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ')
    {
      spaces++;
    }
    else if (str[i] >= '0' && str[i] <= '9')
    {
      digits++;
    }
    else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U')
    {
      vowels++;
    }
    else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
      consonants++;
    }
  }
  printf("\nWhite spaces: %d", spaces);
  printf("\nDigits: %d", digits);
  printf("\nVowels: %d", vowels);
  printf("\nConsonants: %d", consonants);
  return 0;
}
