 // SWAPPING TWO NUMBERS BY VALUES


 #include<iostream>
 using std::cin;
 using std::cout;
 
 int number1,number2; //GLOBAL VARIABLES
  void display(int ,int ); // function declaration
void swapnumbers(int N1,int N2)
{
    int VESSEL=0;   // if N1 =1 ,N2 =2 ..
    VESSEL=N1;      //VESSEL=1
    N1=N2;          //N1=2
    N2=VESSEL;      //N2=1
    display(N1,N2);

}

void getdata(){
    cout<<"enter the value for the first number: ";
    cin>>number1;
    cout<<"\n";
    cout<<"enter the value for the second number: ";
    cin>>number2;
    cout<<"\n";
}

void display(int N1,int N2)
{
    cout<<"Number 1 is "<<N1;
    cout<<"\n";
    cout<<"Number 2 is "<<N2;
    cout<<"\n";
}

int main(){
     
     getdata();
     cout<<"before swapping\n";
     display(number1,number2);
     cout<<"After swapping\n";
     swapnumbers(number1,number2);
    return 0;
}
  

