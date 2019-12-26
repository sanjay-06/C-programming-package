#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

#define A system("cls");

int flag;
												//welcome to our typing tutorial practice

typedef struct userd
{
        char name[100];
        char password[100];
}u;

typedef struct userstat
{
		char username[100];
		double keys_per_min;
		double accuracy;
		double total_time_spent;
}ud;

void welcome();
int mainmenu();
int user();
int newuser();
int login();
int account();
int profile ();
int game();
int practice();
int loginto();
int lesson();
void statistics();
int result();

void welcome()
{
        char text[2000]="\
                                        000000  00  00  00000   000000  00  00   00000       \n\r\
                                          00     0000   00  00    00    00   0  00           \n\r\
                                          00      00    00000     00    0 0  0  00 000       \n\r\
                                          00      00    00        00    0  0 0  00  00       \n\r\
                                          00      00    00      000000  00  00   00000       \n\r\
                                                                                        \n\r\
                                        000000  00  00  000000  000000  00000               \n\r\
                                          00    00  00    00    00  00  00  00              \n\r\
                                          00    00  00    00    00  00  00000               \n\r\
                                          00    00  00    00    00  00  00  00              \n\r\
                                          00    000000    00    000000  00   00             \
\n\n\n\n\n\n\r                                                                                    BY SANJAY AND SARAVANAN \n";
           A
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n%s",text);
    sleep(3);
}

int mainmenu()
{
l1:     A
        int n;
        printf("\t\t\t\t\t\t\t\tT Y P I N G  T U T O R\n");
		printf("\n\n\n\n\t\t\t\t\t\t\t\t1]...SELECT USER");
        printf("\n\t\t\t\t\t\t\t\t2]...QUIT\n");
                scanf("%d",&n);
        if (n==1)
        {
                                user();
        }
        else if (n==2)
        {
                exit(0);
        }
        else
        {
                printf("\n use 1 or 2 only to choose \n");
                                sleep(2);
                goto l1;
        }
}

int user()
{
l2:     A
        int n;
        printf("\t\t\t\t\t\t\t\tT Y P I N G  T U T O R\n");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t1]...NEW USER");
        printf("\n\t\t\t\t\t\t\t\t2]...LOGIN");
        printf("\n\t\t\t\t\t\t\t\t0]...back\n");
        scanf("%d",&n);
        if (n==0)
        {
                mainmenu();
        }
        else if (n==1)
        {
                newuser();
        }
        else if(n==2)
        {
                loginto();
        }
        else
        {
                printf("\n use 1 or 2 only to choose \n");
                sleep(2);
                        goto l2;
        }
}



int newuser()
{
l3:     A
        printf("\t\t\t\t\t\t\t\tT Y P I N G  T U T O R\n");
		printf("\t\t\t\t\t\t\t\ttype back to return\n");
        flag=0;
		FILE *fp;
        u u1;
        fp=fopen("userdata1.txt","a+");
        printf("\nEnter your name:");
        scanf("%s",u1.name);
        if (!(strcmp(u1.name,"back")))
        {
        	user();
		}
        printf("\nEnter your password:");
        scanf("%s",u1.password);
        if (!(strcmp(u1.password,"back")))
        {
        	user();
		}
        if (!(strcmp(u1.name,u1.password)))
        {
                printf("\n The password is too simple!!!");
                sleep(2);
                goto l3;
        }
        if (strlen(u1.password)<5)
        {
	            printf("\n The password is too simple!!!");
                sleep(2);
                goto l3;
        }
        fwrite(&u1,sizeof(u),1,fp);
        fclose(fp);
        printf("\n1 to proceed or 0 to go back:");
        int n;
        scanf("%d",&n);
        if (n==0)
        {
                user();
                }
                else if(n==1)
                {
                    account(u1);
                }
}

int loginto()
{
l4:             A
                printf("\t\t\t\t\t\t\t\tT Y P I N G  T U T O R\n");
                flag=1;
                FILE *fp;
                int n,i=0;
                u u1[10];
                fp=fopen("userdata1.txt","r+");
  				while(fread(&u1[i],sizeof(u),1,fp))
  				{
				 
                  printf("\n\n\n\n\t\t\t\t\t\t\t\t%d]...%s",i+1,u1[i].name);
                  i++;
                }
                printf("\n\n\n\n\t\t\t\t\t\t\t\t0]...press 0 to go back");
				printf("\nSelect the user:");
                scanf("%d",&n);
                if (n==0)
                {
                	user();
				}
				else if (n<0 || n>10)
				{
					printf("\nselect by pressing the numbers");
                                        sleep(1);
                                        goto l4;
				}
				else
				{
					login(u1[n-1]);
				}
}

int login(u u1)
{
l5:             A
                char s[100];
                printf("\t\t\t\t\t\t\t\tT Y P I N G  T U T O T");
                printf("\n\t\t\t\t\t\t\t\t[type back to return]");
                printf("\n\n\n\n\t\t\t\t\t\t\t\tUSERNAME:%s",u1.name);
                printf("\n\t\t\t\t\t\t\t\tPassword:");
                scanf("%s",s);
                if (!strcmp(s,u1.password))
                {
                        account(u1);
                }
                else if(!strcmp(s,"back"))
                {
                	loginto();
				}
                else 
                {
                        printf("\nWRONG PASSWORD!!!");
						sleep(2);
                        goto l5;
                }
}

int account(u u1)
{
l6:     A
        printf("\n\t\t\t\t\t\t\t\tT Y P I N G  T U T O R\n");
        int n;
        printf("\n\n\t\t\t\t\t\t\t\t%s",u1.name);
        printf("\n\n\n\n\n\t\t\t\t\t\t\t\t1]...PRACTICE");
        printf("\n\t\t\t\t\t\t\t\t2]...GAMES");
        printf("\n\t\t\t\t\t\t\t\t3]...PROFILE");
        printf("\n\t\t\t\t\t\t\t\t4]...LOGOUT\n");
        scanf("%d",&n);
        if (n==1)
        {
                practice(u1);
        }
        else if(n==2)
        {
                game();
        }
        else if (n==3)
        {
	            profile(u1);
        }
        else if (n==4)
        {
            user();
        }
        else
        {
                        printf("\nUse 1 to 4 only");
                        sleep(2);
                        goto l6;
        }
}

int practice(u u1)
{
		A
		printf("\n\t\t\t\t\t\t\t\tT Y P I N G  T U T O R\n");
		printf("\n\n\t\t\t\t\t\t\t\t%s\n\n\n",u1.name);
		int i,n;
		for (i=1;i<9;i++)
		{
			printf("\t\t\t\t\t\t\t\t%d]...lesson.%d\n",i,i);
		}
		printf("\t\t\t\t\t\t\t\t0]...press 0 for back\n");
		scanf("%d",&n);
		switch (n)
		{
			case 0:account(u1);break;
			case 1:lesson(u1,"lesson1.txt");
					break;
			case 2:lesson(u1,"lesson2.txt");
					break;
			case 3:lesson(u1,"lesson3.txt");
					break;
			case 4:lesson(u1,"lesson4.txt");
					break;
			case 5:lesson(u1,"lesson5.txt");
					break;
			case 6:lesson(u1,"lesson6.txt");
					break;
			case 7:lesson(u1,"lesson7.txt");
					break;
			case 8:lesson(u1,"lesson8.txt");
					break;
					
		}
}

int lesson(u u1,char le[])
{
		A
		long int e,s;
		char c;
        int l=0,f;
		char x;
		int w=0;
		printf("\n\t\t\t\t\t\t\t\tT Y P I N G  T U T O R\n");
        printf("\n\n\t\t\t\t\t\t\t\t%s\n\n",u1.name);
		FILE *fp;
        fp=fopen(le,"r");
        c=fgetc(fp);
        while(c!='$')
        {
        	printf("%c",c);
        	c=fgetc(fp);
		}
		rewind(fp);
		printf("\n\n\n");
		c=fgetc(fp);
		s=clock();
		while (c!='$')
		{
			while (c!='\n')
			{
					x=getch();
					if ((int)x==27)
					{
						f=2;
						goto l10;
					}
					if (x==c)
					{
						f=0;
						l++;
						printf("%c",x);
					}	
					else
					{
						f=1;
						w++;
					}		
					if(f==0)
					{
						c=fgetc(fp);
					}
			}
			
			if (x=getch())
			{
				printf("\n");
			}
			c=fgetc(fp);
		}
l10:    e=clock();
		fclose(fp);
		statistics(u1,s,e,l,w);
        if(f==2)
        {
        	account(u1);
		}
}

void statistics(u u1,long int s,long int e,int l,int w)
{
	double t;
	t=(double)((e-s)/CLOCKS_PER_SEC);
	ud ud1;
	if (flag==0)
	{
		ud1.accuracy=0;
		ud1.total_time_spent=0;
		ud1.keys_per_min=0;
	}
	strcpy(ud1.username,u1.name);
	ud1.total_time_spent+=t;
	double tts;
	tts=(double)(l/(t*0.0166));
	ud1.keys_per_min+=tts;
	double acc;
	acc=100-((double)(w/l)*100);
	ud1.accuracy+=acc;
	FILE *fp;
	fp=fopen("statistics1.txt","a+");
	fwrite(&ud1,sizeof(ud),1,fp);
	fclose(fp);
	
}

int profile(u u1)
{
l7:     A
        printf("\n\t\t\t\t\t\t\t\tT Y P I N G  T U T O R\n");
        printf("\n\n\t\t\t\t\t\t\t\t%s",u1.name);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t1]...STATISTICS");
        printf("\n\t\t\t\t\t\t\t\t0]...back\n");
        int n;
        scanf("%d",&n);
        if (n==0)
        {
        	account(u1);
        }
        else if(n==1)
        {
           	result(u1);
        }
	    else
        {
                printf("\nuse only 1 or 2 to choose");
                sleep(2);
                goto l7;
        }
}

int result(u u1)
{
		A
        printf("\n\t\t\t\t\t\t\t\tT Y P I N G  T U T O R\n");
        printf("\n\n\t\t\t\t\t\t\t\t%s",u1.name);
		FILE *fp;
		int max=0,i=0,j,n;
		ud ud1[10];
		fp=fopen("statistics1.txt","r");
		while(fread(&ud1[i],sizeof(ud),1,fp))
  		{		 
        		if (!(strcmp(u1.name,ud1[i].username)))
        		{
        			j=i;
				}
				i++;
		}
        printf("\n\n\n\n\t\tThe total time u spent in typing is:::%lf",ud1[j].total_time_spent);
        printf("\n\t\tYour typing speed(in characters per minute) is:::%lf",ud1[j].keys_per_min);
		printf("\n\t\tYour accuracy is:::%lf",ud1[j].accuracy);
		printf("\n\n\n\ntype 0 to return\n");
		scanf("%d",&n);
		if (n==0)
		{
			profile(u1);
		}
}

int game(u u1)
{  
       
		int life=3,s,i,j;
		char x;
		srand(time(0));
l1:		s=65+(rand() % (90-65 + 1));
l2:		for (i=0;i<4;i++)	
		{
			if(life>0)
			{
				A
				printf("life=%d",life);	
				for(j=0;j<i;j++)
				{
				   	printf("\n\n\n\n\n\n");
	        	}
				printf("\t\t\t\t\t\t\t\t%c\n\t\t\t\t\t\t\t\t",s);
				sleep(1);
		    }
		    else
		    {
		    	printf("game over!!!!!!!!!!!!!!!!!!!!!!!");
				sleep(3);
				account(u1);
			}
		}
		A
		printf("\t\t\t\t\t\t\t\t");
		x=getch();
		if (x==s)
		{
			goto l1;
        }
        else
		{
			life--;
         	goto l2;	
		} 
}

int main()
{
		welcome();
        mainmenu();
        return 0;
}

