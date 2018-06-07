#include <stdio.h>

void swap(int A[],int a,int b)
{
	int temp;
	temp = A[a];
	A[a] = A[b];
	A[b] = temp;
}

int partition(int A[],int start,int end)
{
	int pivot, i, p_index;
	pivot = A[end];
	p_index = start;
	for(i = start; i < end; i++) {
		if (A[i] <= pivot) {
			swap(A,i,p_index);
			p_index++;
		}
	}
	swap(A,p_index,end);
	return p_index;
}

void quick_sort(int A[],int start,int end)
{
	int p_index;
	if (start >= end) {
		return;
	}
	p_index = partition(A,start,end);
	quick_sort(A,start,p_index - 1);
	quick_sort(A,p_index + 1,end);
}

int main()
{
	int t, i, j, n, A[1000], B[1000];
	long long sum;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		sum = 0;
		scanf("%d", &n);
		for (j = 0; j < n; j++) {
			scanf("%d", &A[j]);
		}
		for (j = 0; j < n; j++) {
			scanf("%d", &B[j]);
		}
		quick_sort(A,0,n-1);
		quick_sort(B,0,n-1);
		for (j = 0; j < n; j++) {
			sum = sum + (A[j]*B[j]);
		}
		printf("%lld\n", sum);
	}
	return 0;
}