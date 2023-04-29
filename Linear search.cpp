#include<bits/stdc++.h>
using namespace std;

char arr[10]={'A', 'B', 'C', 'G', 'D', 'P', 'Q', 'E', 'F'};
int i,flag;

void search(char x){

for(i=0,flag=0;i<10;i++){
        if(arr[i]==x){
            printf("%c is foundn in %d position\n",x,i+1);
            flag=1;
        }
    }
    if(flag==0){
        printf("%c is not found\n",x);
    }
}

int main(){
	search('Q');
}
