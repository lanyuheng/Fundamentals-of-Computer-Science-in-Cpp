#include <iostream.h>
template <typename T>
void Insert(T arr[], int n)
{
	int i,j,pos;
	T temp;
	for (i=0; i<n; i++)
	{
		pos = i;
		for (j=i; j<n; j++)
		{
			if (arr[j] < arr[pos])
			{
				pos = j;
			}
		}
 
		temp = arr[i];
		arr[i] = arr[pos];
		arr[pos] = temp;
	}
	for (i=0; i<n; i++)
		cout << arr[i] << " ";
}
int main()
{
	int j;
	int i[7];
	char f[7];
	cout<<"ÇëÊäÈëÊý´®:";
	for(j=0;j<7;j++)
	{
		cin>>i[j];
	}
	cout<<"ÇëÊäÈë×Ö·û´®:";
	for(j=0;j<7;j++)
	{
		cin>>f[j];
	}
	Insert(i, 7);
	cout << endl;
	Insert(f, 7);
	cout<<endl;
	return 0;
}
