#include<iostream>
using namespace std;

int merge(int a[], int b[], int n, int m){
int i=0, j=0,k=0;
int c[n+m];
while(i<n && j<m ){

 if(a[i]>b[j]){
     c[k++]=b[j++];}
    else{c[k++]=a[i++];
    }
    }
while(i<n){
        c[k++]=a[i++];
    }
while(j<m){
    c[k++]=b[j++];

}
cout<<"Merged Array:";
        for(int l=0;l<m+n;l++){
              cout<< c[l]<<" ";}
        }



int main(){

     int n;
cout<<"Enter  size for 1st array:"<<endl;
cin>>n;
int a[n];
cout<<"Enter  elements for 1st array:"<<endl;

 for(int i=0;i<n;i++){
    cin>>a[i];
 }
   int m;
cout<<"Enter  size for 2nd array:"<<endl;
cin>>m;
int b[m];
cout<<"Enter  elements for 2nd array:"<<endl;

 for(int i=0;i<m;i++){
    cin>>b[i];
 }
 merge(a,b,n,m);



return 0;
}
