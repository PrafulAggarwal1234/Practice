#include<iostream>
using namespace std;
void reduce(char* &arr,int &index){
    if(index>1){
        if(arr[index-1]=='U'){

                if(arr[index-2]=='L'){

                    if(arr[index]=='L'){
                        arr[index-2]='F';
                    }
                    if(arr[index]=='F'){
                        arr[index-2]='R';
                    }
                    if(arr[index]=='R'){
                        arr[index-2]='U';
                    }

                }

                else if(arr[index-2]=='F'){

                    if(arr[index]=='L'){
                        arr[index-2]='R';
                    }
                    else{
                        arr[index-2]='U';
                    }
                }

                else{
                   arr[index-2]='U';
                }
                index = index-2;
        }
        
    }

}
int main(){

    char *arr = new char();
    int index=-1;
    for(int i=0;i<11;i++){
        index++;
        cin>>arr[index];
        // cout<<"fine1"<<endl;
        reduce(arr,index);
        // cout<<"fine 2"<<endl;
        for (int j = 0; j <index+1; j++)
        {
           cout<<arr[j]<<" ";
        }
    } 
    
}