/*#include <iostream>
using namespace std;
int main()
{
	int a[5];
	cout << "Enter 5 numbers: " <<endl;
	for (int i= 0; i<5; i++)
	{
		cin >> a[i];
	}
	int largest = a[0];
	for (int i=1; i<5; i++ )
	{
		if (a[i]>largest)
		{
			largest = a[i];
		}
	}
	cout << "The largest number is: " <<largest;	
	return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
	int a[5];
	cout << "Enter 5 numbers: " <<endl;
	for (int i= 0; i<5; i++)
	{
		cin >> a[i];
	}
	int smallest = a[0];
	for (int i=1; i<5; i++ )
	{
		if (a[i]< smallest)
		{
			smallest = a[i];
		}
	}
	cout << "The smallest number is: " <<smallest;	
	return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
	int a[10];
	cout << "Enter 10 numbers: " <<endl;
	for (int i= 0; i<10; i++){
		cin >> a[i];
	}
	
	cout << "The even numbers are: ";
	for (int i=0; i<10; i++ )
		if (a[i] % 2 == 0){
			cout << a[i] << ", ";
		}
	
	cout << endl;	
	return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
	int a[5];
	cout << "Enter 5 numbers: " <<endl;
	for (int i= 0; i<5; i++)
	{
		cin >> a[i];
	}
	
	int largest = a[0];
	int secondLargest = a[1];
	for (int i=1; i<5; i++ )
	{
		if (a[i]>largest)
		{
			secondLargest = largest;
			largest = a[i];
	}
		else if ( a[i] > secondLargest && a[i] != largest){
		secondLargest = a[i];
	
		}
	} 
	
	
	cout << "The second largest number is: " <<secondLargest;	
	return 0;
}*/


#include <iostream>
using namespace std;
int main(){
	
	int a[5];
	cout << "Enter 5 numbers: " <<endl;
	for (int i= 0; i<5; i++)
	{
		cin >> a[i];
	}
	
	int smallest = a[0];
	int secondSmallest = a[1];
	for (int i=1 ; i<5; i++ )
	{
		if (a[i]<smallest)
		{
			secondSmallest = smallest;
			smallest = a[i];	
		}
		else if ( a[i] < secondSmallest && a[i] != smallest){
		secondSmallest = a[i];
		}
	}
	cout << "The second smallest number is: " <<secondSmallest;	
	return 0;
}