#include<iostream>
using namespace std;
int main(){
    int no,tno,ono,i,r;
    cout<<"Enter a digit- ";
    cin>>no;
    tno = no/10;
    ono = no%10;
    for(i=0;i<2;i++){
        if(i==0){
            r = tno;
        }
        else{
            r = ono;
        }
        switch(r)
        {
            case 0: 
            cout<<"Zero ";
            break;
            case 1: 
            cout<<"one ";
            break;
            case 2:
            cout<<"Two "; 
            break;
            case 3:
            cout<<"Three "; 
            break;
            case 4: 
            cout<<"Four "; 
            break;
            case 5: 
            cout<<"five "; 
            break;
            case 6: 
            cout<<"Six "; 
            break;
            case 7: 
            cout<<"Seven "; 
            break;
            case 8: 
            cout<<"eight "; 
            break;
            case 9: 
            cout<<"nine "; 
            break;
        }
    }
}


