#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		float a[6];
		float min, hack = 0;int q=0;
		for(int i = 0; i<6; i++){
            cin>>a[i];
        }
		min = ((a[3]+a[4]+a[5])/2);
		hack = max(max(a[3],a[4]),a[5]);
		if((a[0]+a[1]+a[2])> min){
			printf("YES\n");
		}
		else{
			for(int i = 0;i<6; i++){
				if(hack==a[i])
				{
					q=i;
				}
                  
		    }
		    a[5-q]=a[q];
		    if((a[0]+a[1]+a[2])> min){
			printf("YES\n");
		}
		else
		{
			cout<<"NO"<<endl;
            
		}
		}
	}
	return 0;
}