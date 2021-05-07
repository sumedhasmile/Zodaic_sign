# include<stdio.h>
# include<string.h>
# include<stdlib.h>
void main()
{
    int mon,date;
    char op,y;
     int n,choice;
    int d=0,sum=0,j,a=0, c=0;

    do
    {
        printf("\nENTER YOUR CHOICE\n");
        printf("~~~~~~~MENU~~~~~~~\n");
        printf("1::ZODIAC SIGN AND BIRTHSTONE\n2::LUCKY NUMBER\n3::EXIT\n\n");
        scanf("%d",&choice);
        switch(choice)
        {

     case 1:printf("ENTER THE DATE OF YOUR BIRTH DAY\n");
            scanf("%d",&date);
            printf("ENTER THE MONTH OF YOUR BIRTH DAY	\n");
            scanf("%d",&mon);
            if(date>=20&&mon==1||date<=18&&mon==2)
             {
               printf("ZODIAC SIGN IS AQUARIUS AND BIRTHSTONE IS AMETHYST\n");
             }
                else if(date>=19&&mon==2||date<=20&&mon==3)
                {
                    printf("ZODIAC SIGN IS PISCES AND BIRTHSTONE IS AQUAMARINE\n");
                }

                    else if(date>=21&&mon==3||date<=19&&mon==4)
                    {
                       printf("ZODIAC SIGN IS ARIES AND BIRTHSTONE IS DIAMOND\n");
                    }
                      else if(date>=20&&mon==4||date<=20&&mon==5)
                    {
                        printf("ZODIAC SIGN IS TAURUS AND BIRTHSTONE IS EMERALD\n");
                    }
                        else if(date>=21&&mon==5||date<=20&&mon==6)
                    {
                        printf("ZODIAC SIGN IS GEMINI AND BIRTHSTONE IS PEARL\n");
                    }
                        else if(date>=21&&mon==6||date<=22&&mon==7)
                    {
                        printf("ZODIAC SIGN IS CANCER AND BIRTHSTONE IS RUBY\n");
                    }
                        else if(date>=23&&mon==7||date<=22&&mon==8)
                    {
                        printf("ZODIAC SIGN IS LEO AND BIRTHSTONE IS PERIDOT\n");
                    }
                        else if(date>=23&&mon==8||date<=22&&mon==9)
                    {
                        printf("ZODIAC SIGN IS VIGRO AND BIRTHSTONE IS SAPPHIRE\n");
                    }
                        else if(date>=23&&mon==9||date<=22&&mon==10)
                    {
                        printf("ZODIAC SIGN IS LIBRA AND BIRTHSTONE IS OPAL\n");
                    }
                        else if(date>=23&&mon==10||date<=21&&mon==11)
                    {
                        printf("ZODIAC SIGN IS SCORPIO AND BIRTHSTONE IS TOPAZ\n");
                    }
                        else if(date>=22&&mon==11||date<=21&&mon==12)
                    {
                        printf("ZODIAC SIGN IS SAGITTARIUS AND BIRTHSTONE IS TURQUOISE\n");
                    }
                        else if(date>=22&&mon==12||date<=19&&mon==1)
                    {
                        printf("ZODIAC SIGN IS CAPRICORN AND BIRTHSTONE IS GARNET\n");
                    }
                        else
                    {
                        printf("ENTER THE VALID INPUT\n");

                    }
                       break;
            case 2:printf("\n Enter your birth date number \n");
                
                    scanf("%d",&n);
                    while (n>=1)
                    {
                        d=n%10;
                        sum=sum+d;
                        n=n/10;
                    }
                    while (sum>=10){
                    a=sum%10;
                    c=c+a;
                    sum=sum/10;
                    c=c+sum;
                    }
                    if (c>=10)
                    {
                        j=c/10;
                        c=c%10;
                        c=c+j;
                    }
                    printf("\n Your Lucky  Number is %d",c);


                     break;
    case 3: exit(0);
    }
}while(choice!=4);
}
