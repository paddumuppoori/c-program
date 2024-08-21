#include<iostream>
using namespace std;
int main(){
    int age;
    /*bool isEligibleToVote;
    isEligibleToVote=(age>=18)?true:false;
    cout<<isEligibleToVote<<endl;*/
    cout<<"enter the person's age"<<endl;
    cin>>age;
    string isEligibleToVote;
    char isATeenager;
    isEligibleToVote=(age>=18)?"the person is eligible to vote":" the person is not eligible to vote";
    isATeenager=((age>=13)&&(age<18))?'Y':'N';
    cout<<isEligibleToVote<<endl;
    cout<<isATeenager<<endl;

    return 0;
}