# include<iostream>
 using namespace std;
 int main(){
    int money;
    int x,y,z,a,b;
    cin >>x>>y>>z>>a>>b;
    x=1330/100;
    y=1330/50;
    z=1330/30;
    a=1330/20;
    b=1330/10;

    cout<<"enter the total money u wat to withdraw"<< endl;
    cin>> money;

    cout<<"enter the note u want"<< endl;
    cin>> money;
    switch(money){
        case '100': cout<<x<< endl;
        break;

        case '50':cout<<y<< endl;
        break;

        case '30': cout<<z<< endl;
        break;

        case '20': cout<<a<< endl;
        break;

        case '10': cout<<b<< endl;
        break;
        

        default :cout<<"put valid data"<<endl;
            
        }

        return 0;
    }


 