//catching all exception
#include<iostream>
using std::cin;
using std::cout;
const int size=10;
class Array{
    private:
    int arr[size];
    public:
    class LOWRANGE{};
    class HIGHRANGE{};
    int & operator [](int i){
        if(i<0)
         throw LOWRANGE();
        else if(i>=size)
        throw HIGHRANGE();
        return arr[i];
    }
};
int main(){
    Array a1;
    int index;
    try{
        cout<<"enter array index:";
        cin>>index;
        a1[index]=10;
        cout<<index<<"is within the range\n";

    }
    catch(...){
        cout<<"Exception:out of range ";
    }

return 0;
}