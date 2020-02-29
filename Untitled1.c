
//using namespace std;

#define SIZE 10

void object(int,int,int); /*FUNCTION TO CREATE A CIRCLE*/
void bubble(int); /*FUNCTION TO INVOKE THE SORTING OPERATION*/
void flow(int,int); /*FUNCTION THAT DISPLAYS EXCHANGE OF ITEMS*/
void mixing(int,int); /*FUNCTION THAT DISPLAYS SWAPPING PROCESS*/
int el[SIZE];

int main()
{
int n,i,d=0,m=0;
//clrscr();
printf("Enter the No of Elements : " );
scanf("%d",&n);
for(i=0;i<n;i++)
	{
printf("Enter the %d Element : ",i+1);
scanf("%d",&el[i]);
}
initgraph(&d,&m,""); /*INITIALIZING THE GRAPHIC DRIVER*/
settextstyle(3,0,3);
printf(" OBSERVATIONS:\n");
setcolor(9);
outtextxy(250,90,"GIVEN NUMBERS ");
outtextxy(250,390,"SWAPPING ITEMS......"); //
setcolor(WHITE);
line(1,getmaxy()/2-150,getmaxx(),getmaxy()/2-150)
line(1,getmaxy()/2+190,getmaxx(),getmaxy()/2+190);
setcolor(14);
outtextxy(250,430,"BUBBLE SORT");
setcolor(YELLOW);
outtextxy(80,450,"By L.KARTHICK, KLEF UNIVERSITY, VIJAYAWADA ");
setcolor(10);
for(i=0;i	{

object(100+i*50,150,el[i]);
getch();
}
bubble(n); /*CALLING THE BUBBLE() FUNCTION*/
/*
for(i=0;i	{
object(100+i*50,350,el[i]);
getch();
}
*/
getch();
}

void bubble(int n)
{
int i,j,temp,exchange,last;
last=n;
for(i=1;i	{
exchange=0;
last--;

for(j=0;j	{
if(el[j]>el[j+1])
{
flow(j,j+1);/*TO INITIALIZE GRAPHIC DRIVEN OUTPUT*/
temp=el[j];
el[j]=el[j+1];
el[j+1]=temp; /*SWAPPING*/
exchange++;
}
}
gotoxy(300,300);

printf("Total no of exchanges in pass %d are %d\n",i,exchange);
if(!exchange)
break;
}
}


void object(int x,int y,int no)
{ /*OBJECT() CREATES THE GIVEN ELEMENT
IN CIRCLE AND DRAWS ON SCREEN*/
char s[8];
sprintf(s,"%d",no);
circle(x,y,15);
settextstyle(2,0,6);
outtextxy(x-3,y-10,s);
}

void flow(int f,int s)
{ /*FLOW() REPRESENTS THE SORTING ALGORITHM IN GRAPHICS.
IT CALLS OBJECT() AND mixing() TO PERFORM THE TASK	*/
int i;
for(i=0;i<50;i++)
{ /*FIRST OBJECT IS MOVED DOWNWORDS*/
setcolor(WHITE);
object(100+f*50,150+i*4,el[f]);
delay(15);
setcolor(0);
object(100+f*50,150+i*4,el[f]);
}
setcolor(WHITE);
object(100+f*50,150+i*4,el[f]);
for(i=0;i<50;i++) /*SECOND OBJECT IS MOVED DOWNWORDS*/
{
setcolor(WHITE);
object(100+s*50,150+i*4,el[s]);
delay(10);
setcolor(0);
object(100+s*50,150+i*4,el[s]);
}

object(100+s*50,150+i*4,el[s]);
mixing(f,s); /*TO SWAP THE OBJECTS AND NEGLECT THE OVERLAPPING*/
for(i=50;i>0;i--)
{
setcolor(WHITE); /*FIRST OBJECT IS MOVED TO THE SECOND
OBJECTS PLACE*/
object(100+f*50,150+i*4,el[s]);
delay(10);
setcolor(0);
object(100+f*50,150+i*4,el[s]);
}
setcolor(30);
object(100+f*50,150+i*4,el[s]);
for(i=50;i>0;i--)
{ /*SECOND OBJECT IS MOVED TO FIRST
OBJECTS PLACE*/
setcolor(WHITE);
object(100+s*50,150+i*4,el[f]);
delay(15);
setcolor(0);
object(100+s*50,150+i*4,el[f]);
}
setcolor(30);
object(100+s*50,150+i*4,el[f]);
}

void mixing(int f,int s)
{ /*MIXING() SHOWS THE SWAPPING PROCESS OF OBJECTS*/
int i;
for(i=0;i<(s-f)*50;i++)
{
setcolor(YELLOW);
object(100+f*50+i,350,el[f]);
object(100+s*50-i,350,el[s]);
delay(20);
setcolor(0);
object(100+f*50+i,350,el[f]);
object(100+s*50-i,350,el[s]);
}
setcolor(WHITE);
object(100+f*50+i,350,el[f]);
object(100+s*50-i,350,el[s]);
}

