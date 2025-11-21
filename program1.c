
\



#include<stdio.h>
#include<stdlib.h>
structday
{

     char*dayname;
     int date;
     char * activity;

};
void create (structday * day)
{

    day -> dayname = (char*)malloc(size of (char)*20);
    day -> activity = (char*)malloc(size of (char)*100);

    printf("enter the day name :");
    scanf("%s", day -> dayname);

    printf("enter the date :");
    scanf("%d", &day -> date);

    printf("enter the activity for the day :")
    sacnf("%["\n"]", day -> activity);
}

void read(struct day * calendar,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("enter details for the day %d : \n ",i+1);
                create(&calendar[i]);
    }
}

void read(struct day * calendar,int size)
{

    printf("\n week's activity details : \n");
    for (int i=0; i<size ;i++)
    {

        printf("day %d : \n",i+1);
        printf("dayname : %s \n",calendar[i].dayname);
        printf("date : %s \n",calendar[i].date);
        printf("activity : %s \n", calendar[i].activity);
        printf("\n");

    }
}
void frequency (struct day * calendar,int size)
{
    for(int i=0;i<size;i++)
        {
            free(calendar[i].dayname);
            free(calendar[i].dayname);

        }
}

int main()
{
    int size;
    printf("enter the numbers of days in the weak:");
    scanf("%d",&size);
    struct day * calendar = (struct day*) malloc (size of (struct day)*size);
    if (calendar =NULL)
    {
        printf("memory allocation failed exiting program :\n");
        return;

    }
    read(calendar,size);
    display(calendar,size);
    freememory(calendar,size);
    free(calendar);
    return 0;
}
