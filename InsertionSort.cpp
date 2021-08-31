void InsertionSort(int *a, int n)
{
	int i, j, temp;
	for(i=1; i<n; i++)
	{
		temp=a[i];
		for(j=i-1; j>=0 && a[j]>temp; j--)
			a[j+1]=a[j];
			a[j+1]=temp;
	}
}