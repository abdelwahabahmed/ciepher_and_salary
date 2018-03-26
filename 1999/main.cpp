#include <iostream>

using namespace std;

int main()
{
 float price_of_hours=16.78;
 float hours;
 float depandent;
 cin>>hours;
 cin>>depandent;
 float salary;
 float final_salary;
 float extra_hours;
 float x;
 if((hours<=40)&&(depandent<3)){
    salary=hours*price_of_hours;
 }
 else if((hours<=40)&&(depandent>=3)){
    salary=hours*price_of_hours-35;
  }
 else if((hours>40)&&(depandent>=3)){
            extra_hours=hours -40;
            salary=(hours*price_of_hours)-35+(extra_hours *price_of_hours*(3/2));

    }
 else if((hours>40)&&(depandent<3)){
            extra_hours=hours -40;
            salary=(hours*price_of_hours)-35+(extra_hours *price_of_hours*(3/2));
   }
   float wihheld_for_social_security=(salary*6)/100;
   float wihheld_for_federal_income=(salary*14)/100;
   float wihheld_for_sstate_income=(salary*5)/100;
   x= (wihheld_for_social_security+wihheld_for_federal_income+wihheld_for_sstate_income);
   final_salary=salary-(x+10);
   cout <<"final salary"<<"is"<<final_salary<<"\n";

    return 0;
}
