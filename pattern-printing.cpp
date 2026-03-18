#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print7(int n){
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++){
            cout<<"*";
        }
        for(int l=1;l<=n-i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print8(int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*n)-((2*i)+1);k++){
            cout<<"*";
        }
        for(int l=0;l<i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print9(int n){
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++){
            cout<<"*";
        }
        for(int l=1;l<=n-i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*n)-((2*i)+1);k++){
            cout<<"*";
        }
        for(int l=0;l<i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
    /*or just first print pattern7 and then pattern8 it would print the same pattern*/
}
void print10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;
        }
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print11(int n){
    for(int i=0;i<n;i++){
        int start=1;
        if(i%2==0)start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}
void print12(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        space-= 2;
        cout<<endl;
    }
}
void print13(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}
void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print15(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='E'-i+1;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print16(int n){
    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print17(int n){
    for(int i=1;i<=n;i++){
        int breakpoint=(2*i-1)/2;
        //space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //print
        char ch='A';
        for(int j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<=breakpoint)ch++;
            else
            ch--;
        }
        //space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print18(int n){
    for(int i=1;i<=n;i++){
        for(char ch='E'-i+1;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print19(int n){
    int space=0;
    for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }

        // space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
                
        //star
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        space=space+2;
        cout<<endl;
    }
    space =8;
    for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        // space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
                
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        space=space-2;
        cout<<endl;
    }
}
void print20(int n){
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars =i;
        if(i>n)stars=2*n-i;
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";            
        }        
        //spaces
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";            
        }
        if(i<n)spaces-=2;
        else spaces+=2;
        cout<<endl;
    }
}
void print21(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n ){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
void print22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=2*n-2-j;
            int bottom=2*n-2-i;
            cout<<(n-min(min(top,bottom),min(right,left)))<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int N;
        cin>>N;
        print21(N);
    }
    return 0;
}