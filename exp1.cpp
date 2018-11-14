#include<iostream>
using namespace std;
class Array
{
	private:
		int arr[50],size;
	public:
		Array()
		{
			cout<<"Enter size: "<<endl;
			cin>>size;
			for(int i=0;i<size;i++)
			{
				cout<<"Enter element: "<<endl;
				cin>>arr[i];
			}
		}
		void add()
		{
			int pos,no;
			cout<<"enter postion and no.";
			cin>>pos>>no;
			for(int i=size;i>pos;i--)
			{
				arr[i]=arr[i-1];
			}
			arr[pos]=no;
		}
		void delet()
		{
			int pos;
			cout<<"enter position";
			for(int i=pos;i<size-1;i++)
			{
				arr[i]=arr[i+1];
			}
			arr[size-1]=0;
		}
		void find()
		{
			int el;
			cout<<"enter element";
			cin>>el;
			int count=0;
			for(int i=0;i<size;i++)
			{
				if(arr[i]==el)
				{
					cout<<i+1<<' '<<"position"<<endl;
				}
				else count++;
			}
			if(count>0)
			{
				cout<<"element not found";
			}
		}
		void display()
		{
			for(int i=0;i<=size-1;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
};
int main()
{
	Array a;
	int n;
	char ch;
	do
	{
		cout<<"choose the appropriate option: 1.Insert a new element at a specified position"
		<<endl<<"2.Delete an element either whose value is given or whose position is given"
		<<endl<<"3.To find the location of a given element"
		<<endl<<"4.To display the elements of the linear array"
		<<endl<<"Press n to exit"<<endl;
		cin>>n;
		switch(n)
		{
		case 1:
			a.add();
			cin>>ch;
			break;
		case 2:
			a.delet();
			cin>>ch;
			break;
		case 3:
			a.find();
			cin>>ch;
			break;
		case 4:
			a.display();
			cin>>ch;
			break;
		}
	}while(ch!='n');
}
