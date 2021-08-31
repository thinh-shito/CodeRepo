void Merge(int *a, int left, int mid, int right)
{
	int *b = new int [right - left +1];
	int pos=0;
	int i=left;
	int j=mid + 1;
		while(!(i>mid && j>right))
		{
			if((i<=mid && j<=right && a[i]<a[j]) || j>right)
				b[pos++]=a[i++];
			else 
				b[pos++]=a[j++];
		}
	for(i=0; i<pos; i++)
		a[left +i] = b[i];
		delete []b;
}

void MergeSort(int *a, int left, int right)
{
	if(left >= right) return;
	int mid=(left + right)/2;
	MergeSort(a,left, mid);
	MergeSort(a,mid+1, right);
	Merge(a, left, mid, right);

}