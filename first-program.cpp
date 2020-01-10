#include<iostream>
#include<stdlib.h>
using  namespace std;
int ran1(int num1);
int ran2(int num2);
int ran3(int num3);
int ran4(int num4);
int ran5(int num5);
int main(){
     long int i,l,v,a;
	long int n,result,w,f;
	cout<<"1:First Grade"<<endl;
	cout<<"2:Secend Grade"<<endl;
	cout<<"3:Third Grade"<<endl;
	cout<<"4:Forth Grade"<<endl;
	cout<<"5:Fifth Grade"<<endl<<endl;
    cout<<"Please Select  Grade,User Number 1 to 5: ";
    cin>>w;
	cout<<"Enter Number of Questions You want to Generate:";
	cin>>n;
    long int j,k=1,h,sum,b=3;
    if(w==1){
     for(j=1;j<=n;j++)
     {
     	   sum=ran1(h);
    result =ran2(l);
     a=ran1(h);
      v=ran1(h);
    cout<<" "<<k<<"."<<" "<<"("<<sum<<"  " "- "<<a<<")"<<""<<" ="<<"______";
    k++;
    if(k>b){
    cout<<endl<<"";
    b=b+3;
	}	
	}
}
else if(w==2){
	    for(j=1;j<=n;j++)
     
	{
		f=ran5(h);
    sum=ran1(h);
    result =ran2(l);
     a=ran1(h);
      v=ran1(h);
    cout<<" "<<k<<"."<<" "<<"("<<sum<<f<<"  " "- "<<a<<f<<")"<<""<<" ="<<"______";
    k++;
    if(k>b){
    cout<<endl<<"";
    b=b+3;
	}	
	}
}
else if(w==3){
	    for(j=1;j<=n;j++)
     {
     	   sum=ran1(h);
    result =ran2(l);
     a=ran1(h);
      v=ran1(h);
      cout<<" "<<k<<"."<<" "<<"("<<sum<<result<<"  " "- "<<a<<v<<")"<<""<<" ="<<"______";
    k++;
    if(k>b){
    cout<<endl<<"";
    b=b+3;
	}	
	}
}
   else if(w==4)
     for(j=1;j<=n;j++)
     {
     sum=ran1(h);
    result =ran2(l);
     a=ran1(h);
      v=ran1(h);
    cout<<" "<<k<<"."<<" "<<"("<<sum<<result<<f<<"  " "- "<<a<<v<<f<<")"<<""<<" ="<<"______";
    k++;
    if(k>b){
    cout<<endl<<"";
    b=b+3;
	}
}
else if(w==5){
	    for(j=1;j<=n;j++)
     {
     a=ran1(h);
      v=ran1(h);
     cout<<" "<<k<<"."<<" "<<"("<<sum<<result<<a<<"  " "- "<<a<<v<<sum<<")"<<""<<" ="<<"______";
    k++;
    if(k>b){
    cout<<endl<<"";
    b=b+3;
	}	
	}
}

}
int ran1(int num1){
	int m,i;
	  m=10 + rand() % (10 + 1);
	 return m;
	
}
int ran2(int num2){
	int g,i;
	  g=10 + rand() % (10 + 1);
	 return g;
	
}
int ran3(int num3){
	int m,i;
	  m=10 + rand() % (10 + 1);
	 return m;
	
}
int ran4(int num4){
	int g,i;
	  g=10 + rand() % (10 + 1);
	 return g;
	
}
int ran5(int num5){
	int g,i;
	  g=rand()%10 + 1;
	 return g;
	
}




