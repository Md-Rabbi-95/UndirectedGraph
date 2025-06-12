#include <stdio.h>

#include <stdlib.h>

#include<math.h>

#include<time.h>

int array[6000][6000];

int main()

{

time_t t1,t2;

double ti;

int
n,degree,a,b,f=0,totaldegree=0,edge=
0;

printf("Enter number of vertices : ");

scanf("%d",&n);

t1=clock();

//creating a random matrix

srand(time(0));

for(a=1;a<=n;a++){

for(b=1;b<=n;b++){

array[a][b] = rand()%2;

}

}

// creating symmetric matrix

for(a=1;a<=n;a++){

for(b=1;b<=n;b++){

array[b][a] = array[a][b];

}

}

// checking matrix is symmetric

/*for(a=1;a<=n;a++){

for(b=1;b<=n;b++){

if(array[b][a]!=array[a][b])

{

f=1;

break;

}

}

}*/

//printing matrix

for(a=1;a<=n;a++){

for(b=1;b<=n;b++){

printf("\t%2d",array[a][b]);

}

}

printf("\n Vertex \t\tDegree ");

for ( a = 1; a <= n ; a++ ){

degree = 0;

for ( b = 1 ; b <= n ; b++ ){

if ( array[a][b] == 1 )

{

degree++;

totaldegree++;

if( a == b )

{

degree++;

totaldegree++;

}

}

}

printf("\n%5d\t\t\t%d\n",a,degree);

}

printf("\nTotal Degree is =%d\n",totaldegree);

//printing edge

for(a=1;a<=n;a++){

for(b=1;b<=n;b++){

if(b<=a)

{

edge = edge + array[a][b];

}

}

}

printf("Sum of Total Edge =%d\n\n", edge);

if( edge*2 == totaldegree )

{

printf("So,Handshaking theorem is working\n");

}

else

{

printf("So,Handshaking theorem is not working\n");

}

//checking matrix is symmetric or not

/*if(f==0)

printf("Matrix is symmetric\n");

else

printf("Matrix is not
symmetric\n");*/

t2 = clock();

ti = (((double)t2 - (double)t1)/CLOCKS_PER_SEC)*pow(10,3);

printf("Computational time in milisecond = %lf ms\n",ti);

return 0;

}
