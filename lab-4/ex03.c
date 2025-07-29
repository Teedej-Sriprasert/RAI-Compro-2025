int main()
{
    int num;
    do
    {
        printf("Enter a number:");
        scanf("%d", &num);
         if(num % 2 == 0){
            printf("%d is even\n",num);
        }
        else if(num % 2 != 0){
            printf("%d is odd\n", num);
        }
        
    }
    while (num!=0);
    printf ("Exiting Program... Bye");
   
    return 0;
}