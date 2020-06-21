#include<iostream>
using namespace std;
int main()
{
  int i, first, last, middle, n, search;
  int array[100];
  cout<<"Enter number of elements\n";
  cin>>n;
  cout<<"Enter the array elements";
  for (i = 0; i < n; i++)
    cin>>array[i];
    cout<<"Enter the value be searched";
    cin>>search;
  first = 0;
  last = n - 1;
  middle = (first+last)/2;
  while (first <= last) 
  {
    if (array[middle] < search)
    {
      first = middle + 1;
    }
    else if (array[middle] == search) 
    {
        cout<<"Element found";
      break;
    }
    else
    {
      last = middle - 1;
    middle = (first + last)/2;
    }
  }
  if (first > last)
   cout<<"Element not found";
  return 0;
}

// Time Complexity {O(log n)}
