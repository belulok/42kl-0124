/******************************************
*
*  Required headers
*
*******************************************
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/******************************************
*
*  Function prototyping
*
*******************************************
*/
// int ft_isalpha(char character);
// int ft_isdigit(int  digit);
// int ft_isalnum(char character);
// int ft_isascii(int arg);
// int ft_isprint(int  arg);
// size_t  ft_strlen(char  *str);

/******************************************
*
*  Name: ft_strlen
*  Purpose: 
*  Reference: strlen
*
*******************************************

int main()
{
   char *arr[] = {"This is me", "This is him"};
   size_t   length = sizeof(arr) / sizeof(arr[0]);

   for (int i = 0; i < length; i++)
   {
       char *eachArr = arr[i];
       printf("String: %s\n", eachArr);
       printf("Libc: The string, %s has length of %zu\n", eachArr, strlen(eachArr)); // from libc
       printf("Own : The string, %s has length of %zu\n", eachArr, ft_strlen(eachArr)); // from ft_strlen
   }
   return 0;
}
*/
/******************************************
*
*  Name: ft_isprint
*  Purpose: 
*  Reference: isprint
*
*******************************************

int main()
{
   int arr[] = {'q', '\n'};
   size_t   length = sizeof(arr) / sizeof(arr[0]);

   for (int i = 0; i < length; i++)
   {
       int eachArr = arr[i];
       printf("Character: %c\n", eachArr);
       printf("Libc: The status of argument value of %d whether it is printable or not is %d\n", eachArr, isprint(eachArr)); // from libc
       printf("Own : The status of argument value of %d whether it is printable or not is %d\n", eachArr, ft_isprint(eachArr)); // from ft_isprint
   }
   return 0;
}
*/
/******************************************
*
*  Name: ft_isascii
*  Purpose: 
*  Reference: isascii
*
*******************************************

int main()
{
   int arr[] = {-1, 0, 155, 256, 180, 122};
   size_t   length = sizeof(arr) / sizeof(arr[0]);

   for (int i = 0; i < length; i++)
   {
       int eachArr = arr[i];
       printf("Libc: The ASCII status for argument value of %d is %d\n", eachArr, isascii(eachArr)); // from libc
       printf("Own : The ASCII status for argument value of %d is %d\n", eachArr, ft_isascii(eachArr)); // from ft_isascii
   }
   return 0;
}
*/
/******************************************
*
*  Name: ft_isalnum
*  Purpose: 
*  Reference: isalnum
*
*******************************************

int main()
{
   int arr[] = {'5', 'q', 'l', '+'};
   size_t   length = sizeof(arr) / sizeof(arr[0]);

   for (int i = 0; i < length; i++)
   {
       char eachArr = arr[i];
       printf("Character: %c\n", eachArr);
       printf("When %c is passed, return value is %d\n", eachArr, isalnum(eachArr)); // from libc
       // printf("When %c is passed, return value is %d\n", eachArr, ft_isalnum(eachArr)); // from ft_isalnum
   }
   return 0;
}
*/
/******************************************
*
*  Name: ft_isdigit
*  Purpose: 
*  Reference: isdigit
*
*******************************************

int main()
{
   int arr[] = {'5', '+', 'a', 'Z', '100', '5', '+', 'a', 'Z', '100'};
   size_t   length = sizeof(arr) / sizeof(arr[0]);

   for (int i = 0; i < length; i++)
   {
       int eachArr = arr[i];
       printf("Character: %c\n", eachArr);
       printf("Result when numeric character is passed: %d\n", isdigit(eachArr)); // from libc
       printf("Result when numeric character is passed: %d\n", ft_isdigit(eachArr)); // from ft_isdigit
   }
   return 0;
}
*/
/******************************************
*
*  Name: ft_isalpha
*  Purpose: 
*  Reference: isalpha
*
*******************************************

int main()
{
   int arr[] = {'Q', 'q', '+'};
   size_t   length = sizeof(arr) / sizeof(arr[0]);

   for (int i = 0; i < length; i++)
   {
       char eachArr = arr[i];
       printf("Character: %c\n", eachArr);
       printf("Result when uppercase alphabet is passed: %d\n", isalpha(eachArr)); // from libc
       // printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(eachArr)); // ft_isalpha
   }
   return 0;
}
*/