#include<bits/stdc++.h>
using namespace std;

char *arr[50]={"ABC","DEF","PQR","MNO","XYZ","RST"};
int i,flag;

void search(char *x){

for(i=0,flag=0;i<6;i++){
        if(arr[i]==x){
            printf("%s is exixt.\n",x);
            flag=1;
        }
    }
    if(flag==0){
        printf("%s is not found\n",x);
    }
}

int main(){
	search("XYZ");
	
}
