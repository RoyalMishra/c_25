#include<stdio.h>


/* This progam is made to Generate the Table of the any Floating(Decimal) number upto the desired limit
    Written by : Royal Mishra
    Date:       19/03/25
*/

int main()
{       
        float number,limit; // Float--> For Decimal Point Values
    
         printf("Please Enter the Number Whose Table You Want : \t");
         scanf("%f",&number);               // Input Taken from the User

         printf("Please Enter the Limit Upto Which Table You Want : \t");
         scanf("%f",&limit);                // Limit taken To Produce the Output

         printf("The Table for the Given Number : %f",number),printf(" and Upto Limit : %f",limit,"is");
                                            // Verifying the Input Recieved

         for ( float i = 1; i<=limit; i++)   // Loop to Increment the value upto the given Limit
         {
            
            printf("\n %f x %f = %f ",number,i,(number*i));
                                            // Some Formatting to produce the Good Output. 
          
         }

         return 0;

         
          /* Sample Code Output
         Console Window >

            Please Enter the Number Whose Table You Want :  20.5
            Please Enter the Limit Upto Which Table You Want :      5
            
            The Table for the Given Number : 20.500000 and Upto Limit : 5.000000
                20.500000 x 1.000000 = 20.500000
                20.500000 x 2.000000 = 41.000000
                20.500000 x 3.000000 = 61.500000
                20.500000 x 4.000000 = 82.000000
                20.500000 x 5.000000 = 102.500000
         */
}