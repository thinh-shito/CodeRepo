#include <iostream>

using namespace std;

void QuickSort(int *a, int left, int right)
{
	int x=a[(left+right)/2]; // Tìm điểm phân hoạch
	int i=left;
	int j=right;
		while (i<j)
		{
			while(a[i]<x) i++;
			while(a[j]>x) j--;
			if(i<=j)
				{
					swap(a[i],a[j]);
					i++;
					j--;
				}
		}	
	if(j>left)	QuickSort(a,left,j);
	if(i<right)	QuickSort(a,i,right);
}

int main()
{
	int m;
	cin>>m;
	int *a =new int [n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	QuickSort(a,0,n-1);
		for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
	
	return 0;
}