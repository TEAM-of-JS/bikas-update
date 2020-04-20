#include<stdio.h>
main()
{
   system("COLOR 0A");
   unsigned long amount=1200,deposit,withdraw;
   int choice,pin,k,am,re,sim,input_sim,sim_type;
   char phn[11];
   char sm[11];
   char transaction = 'y';

   while(pin !=1111)
    {
       printf("ENTER YOUR PIN NUMBER:");
       scanf("%d",&pin);
       if(pin !=1111)
       {
           printf("\t\t\tPASSWORD NOT MATCH.\n");
           printf("\t\t\tPLEASE YOUR VALID PASSWORD\n");
       }

    }
   do
   {
       printf("\t\t\t\t\t**********Welcome to Bkash service**********\n");
       printf("\t\t\t\t\t1. Check Balance.\n");
       printf("\t\t\t\t\t2. Withdraw cash.\n");
       printf("\t\t\t\t\t3. Mobil Recharge.\n");
       printf("\t\t\t\t\t4. Deposit cash.\n");
       printf("\t\t\t\t\t5. Send Money.\n");
       printf("\t\t\t\t\t6. Quit.\n");
       printf("\t\t\t\t\t7. Helpline.\n");
       printf("\t\t\t********************Go********************\n");
       printf("Enter your choice:");
       scanf("%d",&choice);
switch (choice)
    {
case 1:
        printf("\nENTER YOUR PIN NUMBER:");
        scanf("\n%d",&pin);
        if(pin==1111)
            {
               printf("\n\t\t\t YOUR BALANCE IN RS: %lu",amount);
            }
        else if(pin!=1111)
            {
                    printf("\t\t\tPASSWORD NOT MATCH.\n");
                    printf("\t\t\tPLEASE YOUR VALID PASSWORD\n");
            }
        else
            printf("");
    break;
case 2:
    printf("\n\t\t\t ENTER THE AMOUNT TO WITHDRAW:");
    scanf("%lu",&withdraw);
    if(withdraw < 100 != 0)
    {
    printf("\n\t\t\t PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
    }
    else if(withdraw>(5000 - amount))
    {
        printf("\n\t\t\t INSUFFICENT BALANCE");
    }
    else
    {
        amount = amount -withdraw;
         printf("\nENTER YOUR PIN NUMBER:");
        scanf("\n%d",&pin);
        if(pin==1111)
            {
                printf("\n\t\t\tPLEASE COLLECT CASH");
                printf("\n\t\t\tYOUR CURRENT BALANCE IS %lu",amount);
            }
        else if(pin!=1111)
                {
                    printf("\t\t\tPASSWORD NOT MATCH.\n");
                    printf("\t\t\tPLEASE YOUR VALID PASSWORD\n");
                }
        else
            printf("");
    }
    break;
case 4:
    printf("\n ENTER THE AMOUNT TO DEPOSIT:");
    scanf("%lu",&deposit);
    amount = amount + deposit;
    printf("\nENTER YOUR PIN NUMBER:");
    scanf("\n%d",&pin);
    if(pin==1111)
        {
            printf("\t\t\t\t\tYOUR BALANCE IS %lu",amount);
        }
    else if(pin!=1111)
            {
                printf("\t\t\tPASSWORD NOT MATCH.\n");
                printf("\t\t\tPLEASE YOUR VALID PASSWORD\n");
            }
    else
        printf("");
    break;
case 5:
    printf("Enter Receiver bkash account No:");
    scanf("%s",&sm);
    int temp = strlen(sm);
    if(temp!=11)
    {
            printf("Enter Mobile No:(Mobile No Must be 11 Disit-->)");
            scanf("%s",&sm);
    }
    printf("Enter Amount:");
    scanf("\n%d",&am);
    printf("\t\t\tSend money To:%s\n\t\t\tAmount:%d",sm,am);
    amount = amount - am;
    printf("\nENTER YOUR PIN NUMBER:");
    scanf("\n%d",&pin);
    if(pin==1111)
            {
                printf("\t\t\tsuccessfull Sent money ");
            }
    else if(pin!=1111)
            {
                    printf("\t\t\tPASSWORD NOT MATCH.\n");
                    printf("\t\t\tPLEASE YOUR VALID PASSWORD\n");
            }
     else
        printf("");

    break;

case 6:
    printf("\n\t\t\tTHANK U USING bkash");
    break;
case 7:
    printf("\t\t\tCall 16247 \n\t\t\tVisit:www.bkash.com for more info");
    break;
case 3:
    printf("\t\t\t\t\t.................bkash...................\n \t\t\t\t\t1.Robi\n \t\t\t\t\t2.Airtel\n \t\t\t\t\t3.Banglalink\n \t\t\t\t\t4.grameenphone\n \t\t\t\t\t5.Teletalk\n \t\t\t\t.....................GO.................\n");
    printf("Enter your choice:");
    scanf("%d",&sim);
    if(sim==1)
        {
            input_sim="Robi";
        }
    else if(sim==2)
        {
            input_sim="Airtel";
        }
    else if(sim==3)
        {
            input_sim="Banglalink";
        }
    else if(sim==4)
        {
            input_sim="grameenphone";
        }
    else if(sim==5)
        {
            input_sim="Teletalk";
        }
    else
        {
            printf("\t\t\tYour input is wrong\n");
        }
    printf("1.prepaid\n2.postpaid\n");
    printf("Enter your choice:");
    scanf("%d",&sim_type);
    printf("Enter Mobile No:");
    scanf("%s",&phn);
    int tem = strlen(phn);
    if(tem!=11)
    {
            printf("Enter Mobile No:(Mobile No Must be 11 Disit-->)");
            scanf("%s",&phn);
    }
    printf("Enter Recharge Amount:");
    scanf("%d",&am);
    printf("\n\n\t\t\tMobile Recharge to:%s\n\t\t\tRecharge Amount:tk%d\n",phn,am);
    amount = amount - am;
    printf("\nENTER YOUR PIN NUMBER:");
    scanf("\n%d",&pin);
    if(pin==1111)
            {
               printf("successfull Sent money ");
            }
    else if(pin!=1111)
            {
                    printf("\t\t\tPASSWORD NOT MATCH.\n");
                    printf("\t\t\tPLEASE YOUR VALID PASSWORD\n");
            }
     else
        printf("");
    break;
default:
    printf("\n INVATD CHOICE");
    }
    printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n):\n");
    fflush(stdin);
    scanf("%c",&transaction);
    if(transaction=='n' || transaction=='n')
        {
            k =0;
        }

    }
   while(k);
   printf("\n\t\t\tTHANKS FOR USING bkash SERVICE\n\n");
}
