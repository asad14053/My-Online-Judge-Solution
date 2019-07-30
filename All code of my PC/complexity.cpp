//Insertion sort & Bubble sort
#include<stdio.h>
//#include<conio.h>
#include<time.h>
#include<stdlib.h>


int* bubble(int n, int *b);
int* insertion(int n, int *a);
void print(int n, int *b);

static int a[50],b[50],n;

int main()
{

    clock_t s1,e1,s2,e2;
	while(1){
		printf("\nInput the number of array element: ");
		scanf("%d",&n);
		if(n==0)
			exit(1);
		printf("input numbers=%d",n) ;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[i]=a[i];
			}

		//Bubble
    printf("\n\n bubble sort\n");
		s1=clock();
		bubble(n,b);
		e1=clock();
		printf("Time needed: (e1-s1)/CLK_TCK \n");
		printf("Sorted list:\n");
		print(n,b);
		printf("\n\n");

		//Insertion
		printf("\n\nInsertion sort:\n");
		s2=clock();
		insertion(n,a);
		e2=clock();
		printf("Time needed: (e2-s2)/CLK_TCK\n");
		printf("Sorted list:\n");
		print(n,a);
		printf("\n\n");
		}
		return 0;
}

//Print
void print(int n, int *b){
	for(int i=0;i<n;i++)
		printf("%d\t",b[i]);
	}

//Bubble sort
int* bubble(int n, int *b){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(b[i]>b[j]){
				int key=b[i];
				b[i]=b[j];
				b[j]=key;
				}
		}
	}
    return b;
}

//Insertion sort
int* insertion(int n, int *a){
	for(int i=1;i<n;i++){
			int temp=a[i];
			int j=i-1;
			while(j>=0 && a[j]>temp){
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
		}
	return 0;
}
