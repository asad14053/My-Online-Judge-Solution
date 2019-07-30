  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  long int n,i,j=1,sum;
  clrscr();
  printf("\n\nRANGE:");
  scanf("%ld",&n);
  printf("\n\nFEBONOKI NUMBER:");
  sum=0;
  while(sum+j<=n )
  {
    sum=sum+j;
    j=sum-j;
    printf(" %ld",sum);
  }

  getch();
  }