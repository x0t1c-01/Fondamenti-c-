#include<iostream>
using namespace std;

int main(){
	int seq[100];
	int i=0;
	int n;
	int output;
	int somma=0;
	int media;
	bool fcond=0;
	
	cin>>n;
	
	if(n==-50){
	cout<<"VUOTA";
	return 0;
}	 
	 while(n!=-50){
	    seq[i]=n;
	    i++;
		somma+=n;
		media=somma/(i);
		cout<<endl<<somma<<" "<<media<<" "<<endl<<"==================================="<<endl;
	  	cin>>n;
	 }
	 
	 cout<<"yo"<<endl<<"i is "<<i<<endl;
	 
	 
	 
     int dim=i;
	 for(i=0;i<dim;i++){
	 	cout<<"el seq"<<endl<<seq[i]<<endl;
	 if(fcond)
		 if((media<=seq[i])&&(seq[i]<output))
		  output=seq[i];
	  else{
	  	if(media<=seq[i]){
	  		fcond=1;
	  		output=seq[i];
	    }	  
	 }
}

	  cout<<output;
	  
1	  return 0;
}
