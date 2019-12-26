#include<stdio.h>

#include<string.h>


int amt;

char seats[10][10];

int encryption()
{
    int flag=0;
    printf(" --------\t WELCOME TO THARUN  AND NEERU MOVIE TICKET BOOKING SYSTEM -----------");

    char user[20],pass[20];
    int w;

}

void movies()

{
    int c;
    printf("\n\tEnter the number of the movie\n");
    printf("1.AVENGERS AGE OF ULTRON\n");
    printf("2. AVENGERS INFINITY WAR \n");
    printf("3. AVENGERS ENDGAME \n");
    scanf( "%d",&c );
    if(c==1)
    {
        printf("\n YOU SELECTED AVENGERS AGE OF ULTRON IN SPI CINEMAS");
    }
    else if(c==2)
    {
        printf("\n YOU SELECTED AVENGERS INFINITY WAR IN CINEPOLIS");

    }
    else
    {
        printf("\n YOU SELECTED AVENGERS END GAME IN INOX");
    }
}
void time_selection()
{
        int x;
        printf("\tEnter the show time.\n");
        printf("\n1.Morining Show-10:30\t");
        printf("\n 2.Matinee Show-2:30\t");
        printf("\n 3.Evening Show-6:10\t");
        printf("\n 4.Night show-9:30\n");
        printf("\n Enter the number for the respective show=");
        scanf("%d",&x);


}

void book_tickets()

{
    int x,y;
    int seats [10][10] ;
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            seats[i][j]=0;
        }
    }
    //int s[10][10];
    FILE *seatsa=fopen("seatsavail.txt","r");
    printf("\n\n\n%p\n\n\n",seatsa);
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            fscanf(seatsa,"%d",&seats[i][j]);
        }
    }
    printf("\n\n\n\n\nSeats first new Code\n\n\n\n\n\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d",seats[i][j]);
        }
        printf("\n");
    }

    int no,k;
    display_booked_seat(seats);
    l2:
    printf("\n ENTER THE NO OF TICKETS");
    scanf("%d",&no);
    printf("\n\n\nNumber is %d\n\n\n",no);
    for(i=0;i<no;i++)
    {
    printf(" \n ENTER THE SEAT NUMBER");
    scanf("%d%d",&x,&y);
    x--,y--;
    if(x>=9 || y>=9){
        printf("Sorry invalid!\n");
        goto l2;
    }

    seats[x][y]=1;
    //fclose(seatsa);
   FILE *seatsar=fopen("seatsavail.txt","w");
   printf("\nhi\n");
    for(j=0;j<10;j++)
    {
        for(k=0;k<10;k++)
        {
            fprintf(seatsar,"%d ",seats[j][k]);
        }
    }
    display_booked_seat(seats);
    printf("\n");
    printf("Workin : %d\n\n",i);
    //if(seats[x][y]!=1)
    //{
        //printf("\n INVALID MOVE !!! TRY AGAIN");
      //  goto l2;
    //}
    }


    /*if(seats[x][y]==1)

    {
        printf("INVALID MOVE !! TRY AGAIN");
        printf("\n");
            goto l;
    }*/
    printf("/n");
    display_booked_seat(seats);

    ticket_price();
}
void display_booked_seat(int seats[10][10])
{
    int t;
    printf("\t `  J    I    H    G    F        E    D    C    B    A");
    printf("\n");
    printf("\t ---------------------------------------------------------");
    printf("\n");
    for(t=0;t<10;t++)

    {

        printf("\t | %c  | %c  | %c  | %c  | %c  |    | %c  | %c  | %c  | %c  | %c  |   %d",seats[t][0],seats[t][1],seats[t][2],seats[t][3],seats[t][4],seats[t][5],seats[t][6],seats[t][7],seats[t][8],seats[t][9],t+1);
        printf("\n");
        if(t!=9)
        {

            printf("\t | -- | -- | -- | -- | -- |    | -- | -- | -- | -- | -- | ");
            printf("\n");
        }


        }
        printf("\t --------------------------------------------------------");
        printf("\n");
        printf("\t  ------------------------SCREEN--------------------------");
}

void disp_ist()

{

FILE *spicinema;



    spicinema=fopen("spi.txt","w");

    fprintf(spicinema,"MOVIE NAME = AVENGERS AGE OF ULTRON ");

    fprintf(spicinema,"MOVIE TIME = 10:00 AM | 2:30 PM | 6:00 PM | 10:30 PM");

    fprintf(spicinema,"MOVIE RATE = 250+tax*");

    fprintf(spicinema,"IMDB RATING = 4.6 ");

    fprintf(spicinema,"ROTTEN TOMATOES RATING = 3");

    fclose(spicinema);



FILE *cinepolis;



    cinepolis=fopen("cinepolis.txt","w");

    fprintf(cinepolis,"MOVIE NAME = AVENGERS INFINITY WAR");
    fprintf(cinepolis,"MOVIE TIME= 10:00 AM | 2:30 PM | 6:00 PM | 10:30 PM");

    fprintf(cinepolis,"MOVIE RATE= 200+TAX*");

    fprintf(cinepolis,"IMDB RATING =5.4");

    fprintf(cinepolis,"ROTTEN TOMATOES RATING= 7");

    fclose(cinepolis);



FILE *inox;



    inox=fopen("inox.txt","w");

    fprintf(inox,"MOVIE NAME =  AVENGERS END GAME ");

    fprintf(inox,"MOVIE TIME= 10:00 AM | 2:30 PM | 6:00 PM | 10:00 PM ");

    fprintf(inox,"MOVIE RATE= 250+TAX*");

    fprintf(inox,"IMDB RATING = 1.4");

    fprintf(inox,"ROTTEN TOMATOES= 3");

    fclose(inox);

}
void ticket_price()
{
    char m;
    int n;
    int i;
    amt=0;
    printf("\n ENTER THE NO OF TICETS");
    scanf("%d",&n);
    printf("\n SELECT G FOR GOLD");
    printf(" \n SELECT D FOR DIAMOND");
    printf("\n SELECT P FOR PLATINUM");
    scanf("\n%c",&m);
    switch(m)
    {
        case 'G': printf("YOU SELECTED GOLD");
                   for(i=0;i<n;i++)
                   {
                        amt=n*120;
                    }break;
        case 'D': printf("YOU SELECTED DIAMOND");
                    for(i=0;i<n;i++)
                    {
                        amt=n*150;
                    }break;
        case 'P':   printf("\n YOU SELECTED PLATINUM");
                    for(i=0;i<n;i++)
                    {
                        amt=n*200;
                    }
                    break;
         default : printf("\n INVALID !!!!");
                    break;



    }
    printf("THE AMOUNT IS %d",amt);
}


void main()

{
       int p=0 ;
    p=encryption();
    if (p==1)
    {
            movies();
            time_selection();
            book_tickets();
            disp_ist();





    }
    else
    {
            encryption();
    }


}




