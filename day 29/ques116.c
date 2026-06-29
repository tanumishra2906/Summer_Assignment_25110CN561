//Q116	Write a program to Create inventory management system

// Write a program to create an Inventory Management System using Structures.

#include<stdio.h>

struct Product
{
    int id, quantity;
    char name[50];
    float price;
};

int main()
{
    struct Product p[100];
    int n=0, choice, i, id, found;

    do
    {
        printf("\n********** INVENTORY MANAGEMENT SYSTEM **********\n");
        printf("1. Add Product\n2. Display Products\n3. Search Product\n4. Update Product\n5. Delete Product\n6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d",&p[n].id);
                printf("Enter Product Name: ");
                scanf("%s",p[n].name);
                printf("Enter Quantity: ");
                scanf("%d",&p[n].quantity);
                printf("Enter Price: ");
                scanf("%f",&p[n].price);
                n++;
                printf("Product Added Successfully!\n");
                break;

            case 2:
                if(n==0)
                    printf("No Products Found!\n");
                else
                {
                    for(i=0;i<n;i++)
                    {
                        printf("\nProduct %d\n",i+1);
                        printf("ID : %d\n",p[i].id);
                        printf("Name : %s\n",p[i].name);
                        printf("Quantity : %d\n",p[i].quantity);
                        printf("Price : %.2f\n",p[i].price);
                    }
                }
                break;

            case 3:
                printf("Enter Product ID: ");
                scanf("%d",&id);
                found=0;

                for(i=0;i<n;i++)
                {
                    if(p[i].id==id)
                    {
                        printf("Product Found!\n");
                        printf("ID : %d\n",p[i].id);
                        printf("Name : %s\n",p[i].name);
                        printf("Quantity : %d\n",p[i].quantity);
                        printf("Price : %.2f\n",p[i].price);
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Product Not Found!\n");
                break;

            case 4:
                printf("Enter Product ID: ");
                scanf("%d",&id);
                found=0;

                for(i=0;i<n;i++)
                {
                    if(p[i].id==id)
                    {
                        printf("Enter New Name: ");
                        scanf("%s",p[i].name);
                        printf("Enter New Quantity: ");
                        scanf("%d",&p[i].quantity);
                        printf("Enter New Price: ");
                        scanf("%f",&p[i].price);
                        printf("Product Updated Successfully!\n");
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Product Not Found!\n");
                break;

            case 5:
                printf("Enter Product ID: ");
                scanf("%d",&id);
                found=0;

                for(i=0;i<n;i++)
                {
                    if(p[i].id==id)
                    {
                        int j;
                        for(j=i;j<n-1;j++)
                            p[j]=p[j+1];

                        n--;
                        found=1;
                        printf("Product Deleted Successfully!\n");
                        break;
                    }
                }

                if(found==0)
                    printf("Product Not Found!\n");
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=6);

    return 0;
}

            



