#include <stdio.h>
#include <math.h>
#include <ctype.h>

// if mask is invalid then invalid = 1 and program returns "no"
int invalid = 0;


void RotateClockwise(int a[250][250], int n)
{
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {

            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
}


void decrypt(int boolean[250][250], int mask[250][250], int text[250][250], char message[250], int *k, int columns, int rows)
{
   for (int i=0;i<columns;i++)
   {
      for (int j=0;j<rows;j++)
      {
         if (mask[i][j] == 1)
         {
            if (boolean[i][j] == 1)
            {
               invalid = 1;
               return;
            }
            message[*k] = text[i][j];
            boolean[i][j] = 1;
            *k += 1;
         }
      }
   }
}


int main()
{
   int n;

   FILE *fp1, *fp2;

   fp1 = fopen("input.txt", "r");
   fp2 = fopen("output.txt", "w");

   fscanf(fp1, "%d", &n);

   int mask[250][250];
   int text[250][250];
   int boolean[250][250];

   for (int i=0;i<250;i++)
   {
      for (int j=0;j<250;j++)
         boolean[i][j] = 0;
   }

   char message[250];
   int idx = 0;

   for (int i=0;i<2*n;i++)
   {
      for (int j=0;j<2*n;j++)
      {
         fscanf(fp1, "%d", &mask[i][j]);
      }
   }

   int k = 0;
   int l = 0;

   char a;
   for (int i=0;i<4*n;i++)
   {
      for (int j=0;j<4*n;j++)
      {
         a = fgetc(fp1);
         if (isalpha(a))
         {
            text[l][k] = a;
            if ( k + 1 == 2*n) k = 0, l+=1;
            else k += 1;
         }
      }
   }



   // turn mask clockwise
   decrypt(boolean, mask, text, message, &idx, 2*n, 2*n);
   RotateClockwise(mask, 2*n);

   decrypt(boolean, mask, text, message, &idx, 2*n, 2*n);
   RotateClockwise(mask, 2*n);

   decrypt(boolean, mask, text, message, &idx, 2*n, 2*n);
   RotateClockwise(mask, 2*n);

   decrypt(boolean, mask, text, message, &idx, 2*n, 2*n);

   if (invalid == 1)
      fprintf(fp2, "%s", "No");
   else
   {
      int i = 0;
      while (message[i] != 0)
      {
         fprintf(fp2, "%c", message[i]);
         i += 1;
      }
   }
   return 0;
}