#include<iostream>
using namespace std;
class twoPeopleMeetEachOther
{
	public:
		int d1,d2,v1,v2;
		void getDetails()
		{
			cout<<"Enter Starting point of first person::";
			cin>>d1;
			cout<<"Enter the velocity of first person::";
			cin>>v1;
			cout<<"Enter the starting point of Second Person::";
			cin>>d2;
			cout<<"Enter the velocity of second person::";
			cin>>v2;
		}
		bool passOrNot(int d1,int d2, int v1, int v2)
		{
			if(d1<d2 && v1<=v2)
			{
				return false;
			}
			if(d1>d2 && v1>=v2)
			{
				return false;
			}
			if(d1>d2)
			{
				d2=d1+d2;
				d1=d2-d1;
				d1=d2-d1;
				v2=v1+v2;
				v1=v2-v1;
				v1=v2-v1;
				
			}
			while(d1>d1)
			{
				if(d1==d2)
				{
					return true;
				}
				d1=d1+v1;
				d2=d2+v2;
			}
			return false;
		}
			
};
int main()
{
	twoPeopleMeetEachOther ob;
	bool result;
	ob.getDetails();
	result=ob.passOrNot(ob.d1,ob.d2,ob.v1,ob.v2);
	if(result==1)
	{
		cout<<"Two people Pass Each other";
	}
	else
	{
		cout<<"They will never meet each other";
	}
	return 0;
}
