#include <stdio.h>

// A utility function to print an array
void printArray (int arr[], int n);

// A utility function to check if num has all 9s
int AreAll9s (int num[], int n );

// Returns next palindrome of a given number num[].
// This function is for input type 2 and 3
void generateNextPalindromeUtil (int num[], int n )
{
    // find the index of mid digit
    int mid = n/2;
	//printf("mid = %d\n",mid);
    printArray (num, n);
    // A bool variable to check if copy of left side to right is sufficient or not
    bool leftsmaller = false;

    // end of left side is always 'mid -1'
    int i = mid - 1;
	//printf("i = %d\n",i);
    // Begining of right side depends if n is odd or even
    int j = (n % 2)? mid + 1 : mid;
	//printf("j = %d\n",j);
   // Initially, ignore the middle same digits
    while (i >= 0 && num[i] == num[j])
        i--,j++;
    printf("i=%d j = %d",i ,j);
	//printf("Initially, ignore the middle same digits-After Running While Loop i = %d , j = %d\n",i,j);
    // Find if the middle digit(s) need to be incremented or not (or copying left
    // side is not sufficient)
	//printf("Find if the middle digit(s) need to be incremented or not or copying left side is not sufficient\n");
    if ( i < 0 || num[i] < num[j])
        leftsmaller = true;
	printf("leftsmaller = %d\n",leftsmaller);
    // Copy the mirror of left to tight
    while (i >= 0)
    {
        num[j] = num[i];
        j++;
        i--;
    }
    printArray (num, n);
    // Handle the case where middle digit(s) must be incremented.
    // This part of code is for CASE 1 and CASE 2.2
    if (leftsmaller == true)
    {
        int carry = 1;
        i = mid - 1;
        printf("Hello1\n");
        printArray (num, n);
        // If there are odd digits, then increment
        // the middle digit and store the carry
        if (n%2 == 1)
        {
            num[mid] += carry;
            printf("%d",num[mid]);
            carry = num[mid] / 10;
            printf("%d",carry);
            num[mid] %= 10;
            printf("%d",num[mid]);
            j = mid + 1;
        }
        else
            j = mid;
        printf("\nHello2\n");
        printArray (num, n);

        // Add 1 to the rightmost digit of the left side, propagate the carry
        // towards MSB digit and simultaneously copying mirror of the left side
        // to the right side.
        while (i >= 0)
        {
            num[i] += carry;
            carry = num[i] / 10;
            num[i] %= 10;
            num[j++] = num[i--]; // copy mirror to right
        }
    }
}

// The function that prints next palindrome of a given number num[]
// with n digits.
void generateNextPalindrome( int num[], int n )
{
    int i;

    printf("\nNext palindrome is:\n");

    // Input type 1: All the digits are 9, simply o/p 1
    // followed by n-1 0's followed by 1.
    if( AreAll9s( num, n ) )
    {
        printf( "1 ");
        for( i = 1; i < n; i++ )
            printf( "0 " );
        printf( "1" );
    }

    // Input type 2 and 3
    else
    {
        generateNextPalindromeUtil ( num, n );

        // print the result
        printArray (num, n);
    }
}

// A utility function to check if num has all 9s
int AreAll9s( int* num, int n )
{
    int i;
    for( i = 0; i < n; ++i )
        if( num[i] != 9 )
            return 0;
    return 1;
}

/* Utility that prints out an array on a line */
void printArray(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver Program to test above function
int main()
{
   int num[] = {1,0,1};

    int n = sizeof (num)/ sizeof(num[0]);

    generateNextPalindrome( num, n );

    return 0;
}
