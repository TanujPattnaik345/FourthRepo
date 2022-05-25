#include<iostream>
using namespace std;
int main()
{
	int boy,girl,k,t,div1,div2;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>boy>>girl>>k;
		if(boy<k)
			boy=boy+(k-boy);
		if(girl<k)
			girl=girl+(k-girl);
		if(boy%k!=0)
			div1=(boy/k);
		else
			div1=(boy/k)+1;
		if(girl%k!=0)
			div2=(girl/k);
		else
			div2=(girl/k)+1;
		cout<<div1+div2<<endl;
		div1=div2=0;
	}
	
	return 0;
}



//#include <iostream>
//using namespace std;
//int main() {
//	int boys ,girls;
//	int k;
//	int test;
//	cin>>test;
//	while(test--){
//		cin>>boys>>girls>>k;
//		int room=0;
//		int room1=0;
//		int div=0;
//		int div1=0;
//		int finroom;
//
//
//		if(boys%k==0){
//			 room +=boys/k;
//		}
//		else if(boys%k!=0){
//              div=boys/k;
//		room +=boys%k+div;
//		}
//	
//	else if(boys%k<k){
//		room +=1;
//	}
//
//
//		if(girls%k==0){
//			 room1 +=girls/k;
//		}
//		else if(girls%k!=0){
//			div1=girls/k;
//		room1 +=girls%k+div1;
//		}
//	
//	else if(girls%k<k){
//		room1 +=1;
//	}
//	 finroom=room+room1;
//	cout<<finroom<<endl;
//	}
//
//}
