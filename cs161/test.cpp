#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
float get_avg_price(int cost){
  float avg_price = 0;
  int lower =0; //5% above the cost
  int upper = 0;// 10% above the cost
  lower = (0.05 * cost) + cost;
  upper = (0.10 * cost) + cost;
  avg_price = rand() % upper + lower; //generate a num between lower and upper
  return avg_price;

}

float calculate_gross_income(int mon_salary, int num_months, int num_cars, int cost, int num_misconducts, int year, string state){

// Annual salary = monthly salary * number of months worked in a year
  int annual_salary = 0;
  annual_salary = mon_salary * num_months;
//Profit = number of cars sold * avg selling price of cars
  float avg_price = 0;
  avg_price = get_avg_price(cost);

  float profit = 0;
  profit = num_cars * avg_price;

  float new_profit = 0;
  new_profit = profit * 0.02; //2% of the profit

  int deduction = 0;
  //Deduction = $0 is numbeer of miscondcts is 0
  //else //100 * (2^number of misconducts -1)
  if (num_misconducts == 0) {
    deduction = 0;
  }
  else {
    deduction = 100*(pow(2, num_misconducts-1));
  }
  //gross income =  annual salary +  2% of the profit - Deduction
  float income = 0;
  income = annual_salary + new_profit - deduction;
  return income;
}

void get_info(){
  //get all the info from the User
  int mon_salary = 0;
  cout<<"What is the Monthly salary? "<<endl;
  cin>>mon_salary;

  int num_months = 0;
  cout<<"What is the number of months worked in a year? "<<endl;
  cin>>num_months;

  int cost = 0;
  cout<<"What is the cost of a car? "<<endl;
  cin>>cost;

  int num_cars = 0;
  cout<<"What is  the number of cars sold? "<<endl;
  cin>>num_cars;

  int num_misconducts = 0;
  cout<<"What is the number of misconducts observed"<<endl;
  cin>>num_misconducts;

  int year = 0;
  cout<<"What is the tax year? "<<endl;
  cin>>year;

  string state = "";
  cout<<"What is the state? "<<endl;
  cin>>state;


  float gross_income = 0;
  gross_income = calculate_gross_income(mon_salary, num_months, num_cars, cost, num_misconducts, year, state);

}

float calculate_taxes(){

}

int main () {
  srand(time(NULL)); //seeds  the random number generator
  get_info();
  calculate_taxes();
}
