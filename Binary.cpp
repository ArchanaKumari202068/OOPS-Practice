#include <iostream>
using namespace std;
class Distance{
    public:
    int feet;
    int inch;
    
    Distance(){
        feet=0;
        inch=0;

    }
    Distance(int f, int i){
        feet=f;
        inch=i;
        
    }

Distance operator +(Distance D2){
    Distance D3;
    D3.feet= feet+D2.feet;
    D3.inch= inch +D2.inch;
    return D3;
}
};

int main(){
    Distance D1(3,4);
    Distance D2(8,2);
    Distance D3;
    D3= D1+ D2;
    cout<<"\n Total feet and inch"<<" "<<D3.feet<<" "<<D3.inch;
    return 0;

}
