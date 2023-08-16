    //PRETFIX
    //member function YES return  using this parameterized constructor or returning nameless object
    #include<iostream>
    using std::cin;
    using std::cout;

    class test{
        int count;
        public:
        test(){
            count=0;
        } 
        test(int n){
            count=n;
        }
        void display(){
            cout<<count;
        }
        test operator ++(){
            return test(++count);
        }

    };
    int main(){
        test c1;
        ++c1;
        c1.display();
    
    return 0;
    }