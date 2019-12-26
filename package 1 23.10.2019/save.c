#include<stdio.h>
void book_tickets()

{
   /* int x,y;
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
    }
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
}*/
int main()
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
