#include<iostream>

using namespace std;

//Function for binary search
int binarySearch(int arr[], int first_index, int last_index, int test_num)
{
   while(first_index<=last_index)
    {
      int mid = (first_index+last_index)/2;
      if (arr[mid] == test_num)
      return mid ;
      if (arr[mid] < test_num)
      first_index=mid+1;
      else
      last_index=mid-1;
   }
   return -1;
}

int main()
{
	int arr[]={3, 5, 1, 7, 2, 8, 6, 15, 13, 22, 45};
	int i,j,temp;
	int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"\nn= "<<n<<"\n";

    cout<<"\nBefore bubble sort: ";
	for(i=0;i<n;i++){
	cout<<" "<<arr[i];
	}

    for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
		  if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
    }

	cout<<"\n\nAfter bubble sort : ";
	for(i=0;i<n;i++)
		cout<<" "<<arr[i];
        cout<<"\n\n";
//Bubble sort end


//Binary search start
   int test_num =22;
   int index = binarySearch (arr, 0, n-1, test_num);
   if(index == -1)
   cout<< test_num <<" is not found in the array.\n";
   else
   cout<< test_num <<" is found in the "<< index+1 <<" number position in the bubble sort array\n";
return 0;
}
