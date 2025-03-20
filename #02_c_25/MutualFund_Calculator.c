#include<stdio.h>
/*  This program is created to calculate the Investment Made in any Mutual Fund
    Written By: Royal Mishra
    Date      : 20/03/2025
*/

int main()
{   
    // Print the header for the Mutual Fund Investment Calculator    
    printf("=========== Mutual Fund Investment Calculator =========== \n");
    
        // Declare variables for amount, time, interest rate, and final amount
        float Amount,Time,Interest,Final_Amount;
        int Compounding_Time;

         // Prompt user to enter the investment amount
         printf("\n Hello, Please Enter Your Amount How much You want To Invest : \t");
         scanf("%f",&Amount); // Read the investment amount from user input

         // Prompt user to specify the number of years for investment
         printf(" Please Specify the Number of Years You want to Invest : \t");
         scanf("%f",&Time); // Read the investment duration from user input

         // Prompt user to specify the rate of interest
         printf(" Please Specify the Rate of Interest you are getting : \t");
         scanf("%f",&Interest); // Read the interest rate from user input

         // Prompt user to enter the number of times interest is compounded per year
         printf(" Please Enter number of times that interest is compounded per year : \t");
         scanf("%d",&Compounding_Time); // Read the compounding frequency from user input

         // Display the entered details for confirmation
         printf(" Your Amount is : %f INR \n You are investing for : %f Years \n Your Rate of Interest is : %f Per Year \n Compounding %d Times Yearly\n\n",Amount,Time,Interest,Compounding_Time);
         
         // Calculate the final amount using the compound interest formula
         Final_Amount = Amount;

        // Calculate the final amount using compound interest formula iteratively
        for (int i = 0; i < Compounding_Time * Time; i++) {
        Final_Amount += (Final_Amount * (Interest / 100) / Compounding_Time);
            }
         
         
         // Display the final amount to the user
         printf(" You will get %f Amount Finally ",Final_Amount);

         return 0;// End of the program
}