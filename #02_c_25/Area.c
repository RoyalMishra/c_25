#include<stdio.h>


int main()
{
    int side,length,breath;
    float radius;
        // Area of a Square 

         printf("Enter the Length of Side of Square : \t");
         scanf("%d",&side);

         printf("The Area of the Square is : \t %d",side*side);

        // Area of Rectangle

         printf("\nEnter the Length of Rectangle : \t");
         scanf("%d",&length);

         printf("Enter the breadth of Rectangle : \t");
         scanf("%d",&breath);

         printf("The Area of the Rectangle is :\t %d ",length*breath);

         // Area of circle
         printf("\nEnter the radius of the circle : \t");
         scanf("%f",&radius);
         printf("The Area of Circle is : \t %f",3.14*(radius*radius));

         
         return 0;
}