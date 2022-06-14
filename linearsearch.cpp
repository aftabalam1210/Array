#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;

        }
    }
    return -1;

}
int main(){
    int arr[]={3,5,10,56,9,5,2};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter number to be searched";
    cin>>key;
    int index =linear_search(arr,n,key);
    if(index!=-1){
        cout<<key<<"\tis present at index"<<index<<endl;
    }
    else{
        cout<<key<<"\tis Not Present"<<endl;
    }

return 0;


}
