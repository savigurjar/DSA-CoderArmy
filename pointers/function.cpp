   #include <iostream>
using namespace std;

/*
void incre(int *ptr)
{
    *ptr = *ptr+1;
}
int main(){
   // function
    // pass by poiner
    int num = 30;
    int temp = num;
    incre(&num);
    cout<<num;
}*/
/*
void swapping(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
} //pass by pointer
int main(){

    // swapping
    int first = 12,second = 30;
    swapping(&first,&second);
    cout<<first<<" "<<second;

    // refrence variable
    // int num = 10;
    // int &temp = num;
}*/


    // refrence variable
    // pass by reference
void swapping(int &p1,int &p2){
    int temp = p1;
    p1 = p2;
    p2 = temp;
} 
int main(){

    // swapping
    int first = 12,second = 30;
    swapping(first,second);
    cout<<first<<" "<<second;

 
}
