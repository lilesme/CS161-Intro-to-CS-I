/*************************
 **Program:Assignment 3 
 **Name:Megan Liles
 **Date:1/24/2017
 **Description:Grade Calculator
 **Input:Weights and scores as decimals or integers
 **Output:Average Grade
 **************************/
#include<iostream>

using namespace std;

/***********************
 **Function: Calculate Lab Average
 **Description:User inputs how many labs they want to calculate, their points and score and is given an average.
 **Parameters:none
 **Pre-Conditions: labs>0
 **Post-Conditions: lab avg(float)
 **Return:lab average
 ***********************/
double calculate_lab_average() {
   double lab_avg=0;
   int lab_num, lab_points, lab_score, lab_total=0, ind_lab_points, lab_pt_total=0, x;

   cout<<"How many labs?";
   cin>>lab_num;
   cout<<"Do the point values vary? Yes(1), No(2):";
   cin>>x;
   if(x==1){
      for(int i=1; i<=lab_num; i++){
	 cout<<"Lab"<<i<<" Points: ";
	 cin>>ind_lab_points;
	 cout<<"Lab"<<i<<" Score: ";
	 cin>>lab_score;
	 lab_pt_total +=ind_lab_points;
	 lab_total +=lab_score;
      }
      lab_avg=(float)lab_total/lab_pt_total;
      return lab_avg;
   }
   else if(x==2){	
      cout<<"How many points?";
      cin>>lab_points;
      for(int i=1; i<=lab_num; i++){
	 cout<<"Lab"<<i<<" Score: ";
	 cin>>lab_score;
	 lab_total +=lab_score;
      }
      lab_avg=(float)lab_total/(lab_num*lab_points);
      return lab_avg;
   }
}
/***********************
 **Function: Calculate Test Average
 **Description:User inputs how many tests they want to calculate, their points and score and is given an average.
 **Parameters: none
 **Pre-Conditions: tests>0
 **Post-Conditions: test average(float)
 **Return: test average
 ***********************/

double calculate_test_average(){
   double test_avg=0;
   int test_num;
   int test_points;
   int test_score;
   int test_total=0;
   int ind_test_points;
   int test_pt_total=0;
   int x;

   cout<<"How many tests?";
   cin>>test_num;
   cout<<"Do the point values vary? Yes(1), No(2):";
   cin>>x;
   if(x==1){
      for(int i=1; i<=test_num; i++){
	 cout<<"Test"<<i<<"Points:";
	 cin>>ind_test_points;
	 cout<<"Test"<<i<<"Score: ";
	 cin>>test_score;
	 test_pt_total +=ind_test_points;
	 test_total +=test_score;
      }
      test_avg=(float)test_total/test_pt_total;
      return test_avg;
   }
   else if(x==2){
      cout<<"How many points?";
      cin>>test_points;
      for(int i=1; i<=test_num; i++){
	 cout<<"Test"<<i<<"Score: ";
	 cin>>test_score;
	 test_total +=test_score;
      }
      test_avg=(float)test_total/(test_num*test_points);
      return test_avg;
   }
}
/***********************
 **Function: Calculate Assignment Average 
 **Description:User inputs how many assignments they want to calculate, their points and score and is given an average.
 **Parameters:none
 **Pre-Conditions:assignments>0
 **Post-Conditions:assignment average(float)
 **Return:assignment average
 ***********************/

double calculate_assignment_average(){
   double assignment_avg=0;
   int assignment_num;
   int assignment_points;
   int assignment_score;
   int assignment_total=0;
   int ind_assignment_points;
   int assignment_test_points;
   int assignment_pt_total=0;
   int x;

   cout<<"How many assignments?";
   cin>>assignment_num;
   cout<<"Do the point values vary? Yes(1), No(2):";
   cin>>x;
   if(x==1){
      for(int i=1; i<=assignment_num; i++){
	 cout<<"Assignment"<<i<<"Points:";
	 cin>>ind_assignment_points;
	 cout<<"Assignment"<<i<<"Score: ";
	 cin>>assignment_score;
	 assignment_pt_total +=ind_assignment_points;
	 assignment_total +=assignment_score;
      }
      assignment_avg=(float)assignment_total/assignment_pt_total;
      return assignment_avg;
   }
   else if(x==2){
      cout<<"How many points?";
      cin>>assignment_points;
      for(int i=1; i<=assignment_num; i++){
	 cout<<"Assignment"<<i<<"Score: ";
	 cin>>assignment_score;
	 assignment_total +=assignment_score;
      }
      assignment_avg=(float)assignment_total/(assignment_num*assignment_points);
      return assignment_avg;
   }
}
/***********************
 **Function:Calcuate Quiz Average
 **Description:User inputs how many quizzes they want to calculate, their points and score and is given an average.
 **Parameters:none
 **Pre-Conditions:quiz>0
 **Post-Conditions:quiz avg(float)
 **Return:quiz average
 ***********************/

double calculate_quiz_average(){
   double quiz_avg=0;
   int quiz_num;
   int quiz_points;
   int quiz_score;
   int quiz_total=0;
   int ind_quiz_points;
   int quiz_pt_total=0;
   int x;

   cout<<"How many quizzes?";
   cin>>quiz_num;
   cout<<"Do the point values vary? Yes(1), No(2):";
   cin>>x;
   if(x==1){
      for(int i=1; i<=quiz_num; i++){
	 cout<<"Quiz "<<i<<" Points:";
	 cin>>ind_quiz_points;
	 cout<<"Quiz "<<i<<" Score: ";
	 cin>>quiz_score;
	 quiz_pt_total +=ind_quiz_points;
	 quiz_total +=quiz_score;
      }
      quiz_avg=(float)quiz_total/quiz_pt_total;
      return quiz_avg;
   }
   else if(x==2){
      cout<<"How many points?";
      cin>>quiz_points;
      for(int i=1; i<=quiz_num; i++){
	 cout<<"Quiz "<<i<<" Score: ";
	 cin>>quiz_score;
	 quiz_total +=quiz_score;
      }
      quiz_avg=(float)quiz_total/(quiz_num*quiz_points);
      return quiz_avg;
   }
}
/***********************
 **Function:Calculate Design Average
 **Description:User inputs how many designs they want to calculate, their points and score and is given an average.
 **Parameters:none
 **Pre-Conditions:design>0
 **Post-Conditions:design avg(float)
 **Return:design average
 ***********************/

double calculate_design_average(){
   double design_avg=0;
   int design_num;
   int design_points;
   int design_score;
   int design_total=0;
   int ind_design_points;
   int design_pt_total=0;
   int x;

   cout<<"How many designs?";
   cin>>design_num;
   cout<<"Do the point values vary? Yes(1), No(2):";
   cin>>x;
   if(x==1){
      for(int i=1; i<=design_num; i++){
	 cout<<"Design "<<i<<" Points:";
	 cin>>ind_design_points;
	 cout<<"Design "<<i<<" Score: ";
	 cin>>design_score;
	 design_pt_total +=ind_design_points;
	 design_total +=design_score;
      }
      design_avg=(float)design_total/design_pt_total;
      return design_avg;
   }
   else if(x==2){
      cout<<"How many points?";
      cin>>design_points;
      for(int i=1; i<=design_num; i++){
	 cout<<"Design "<<i<<" Score: ";
	 cin>>design_score;
	 design_total +=design_score;
      }
      design_avg=(float)design_total/(design_num*design_points);
      return design_avg;
   }
}
/***********************
 **Function:Calculate Critique Average
 **Description:User inputs how many critiques they want to calculate, their points and score and is given an average.
 **Parameters:none
 **Pre-Conditions:critiques>0
 **Post-Conditions:critique avg(float)
 **Return:critique average
 ***********************/

double calculate_critique_average(){
   double critique_avg=0;
   int critique_num;
   int critique_points;
   int critique_score;
   int critique_total=0;
   int ind_critique_points;
   int critique_pt_total=0;
   int x;

   cout<<"How many Critiques?";
   cin>>critique_num;
   cout<<"Do the point values vary? Yes(1), No(2):";
   cin>>x;
   if(x==1){
      for(int i=1; i<=critique_num; i++){
	 cout<<"Critique "<<i<<" Points:";
	 cin>>ind_critique_points;
	 cout<<"Critique "<<i<<" Score: ";
	 cin>>critique_score;
	 critique_pt_total +=ind_critique_points;
	 critique_total +=critique_score;
      }
      critique_avg=(float)critique_total/critique_pt_total;
      return critique_avg;
   }
   else if(x==2){
      cout<<"How many points?";
      cin>>critique_points;
      for(int i=1; i<=critique_num; i++){
	 cout<<"Critique "<<i<<" Score: ";
	 cin>>critique_score;
	 critique_total +=critique_score;
      }
      critique_avg=(float)critique_total/(critique_num*critique_points);
      return critique_avg;
   }
}
/***********************
 **Function:Calculate Recitation Average
 **Description:User inputs the weights for eachs ection of recitation,how many crituqes, quizzes and designs, their points and score, and is given an average.
 **Parameters:none
 **Pre-Conditions:0>weights<1
 **Post-Conditions:recitation avg(float)
 **Return:recitation average
 ***********************/
double calculate_recitation_average(){

   double design_weight, critique_weight, quiz_weight, design_avg, critique_avg, quiz_avg;

   cout<<"Please enter the weight for each section of recitation as a decimal. Enter a 0 for the sections you do not have."<<endl;
   cout<<"Design Weight"<<endl;
   cin>>design_weight;
   cout<<"Crtique Weight"<<endl;
   cin>>critique_weight;
   cout<<"Quiz Weight"<<endl;
   cin>>quiz_weight;

   calculate_critique_average();
   calculate_design_average();
   calculate_quiz_average();

   double recitation_avg=(float)(design_weight*design_avg)+(critique_weight*critique_avg)+(quiz_weight*quiz_avg);
   return recitation_avg;

}
/***********************
 **Function:Enter Class Weights
 **Description:User inputs weights for each seciton of class to be given to overall grade
 **Parameters: double lab_weight, double recitation_weight, double assignment_weight, double test_weight, double final_weight
 **Pre-Conditions:0<weights<1
 **Post-Conditions:user is asked about the averaes for each section
 **Return:nothing
 ***********************/

void enter_class_weights(double lab_weight, double recitation_weight, double assignment_weight, double test_weight, double final_weight){

   cout<<"Please enter the weight for each section as a decimal. Enter a 0 for the sections you do not have."<<endl;
   cout<<"Lab Weight: "<<endl;
   cin>>lab_weight;
   cout<<"Recitation Weight: "<<endl;
   cin>>recitation_weight;
   cout<<"Assignment Weight: "<<endl;
   cin>>assignment_weight;
   cout<<"Test Weight: "<<endl;
   cin>>test_weight;
   cout<<"Final Weight: "<<endl;
   cin>>final_weight;

}
/***********************
 **Function:Calculate Final average
 **Description:user inputs the score and points fo their final
 **Parameters:none
 **Pre-Conditions:User asked to calculate overall grade
 **Post-Conditions:final avg(float)
 **Return:final average
 ***********************/
double calculate_final_average(){
   int final_score;
   int final_points;

   cout<<"Please enter your score of the final: "<<endl;
   cin>>final_score;
   cout<<"Please enter the points the final was out of: "<<endl;
   cin>>final_points;

   double final_avg=(final_score/final_points);
   return final_avg;
}
/***********************
 **Function:Calculate Overall Grade
 **Description: calls other functions to get the weights and averages from each of the sections to calculate the over grade
 **Parameters:none
 **Pre-Conditions:weights<1
 **Post-Conditions:overall grade(float)
 **Return:overall grade
 ***********************/

double calculate_overall_grade(){

   double lab_weight, recitation_weight, assignment_weight, test_weight, final_weight;


   enter_class_weights(lab_weight, recitation_weight, assignment_weight, test_weight, final_weight);
   double recitation_avg = calculate_recitation_average();
   double test_avg = calculate_test_average();
   double assignment_avg = calculate_assignment_average();
   double lab_avg = calculate_lab_average();
   double final_avg = calculate_final_average();

   double overall_grade=(float)(lab_weight*lab_avg)+(recitation_weight*recitation_avg)+(assignment_weight*assignment_avg)+(test_weight*test_avg)+(final_weight*final_avg);
   return overall_grade;
}
/***********************
 **Function:Main
 **Description:Asks user to decide which part of the class they want an average for
 **Parameters:none
 **Pre-Conditions:User runs program
 **Post-Conditions:User presses 0 to quit
 **Return:nothing
 ***********************/

int main(){

   int x;
   int y;
   do{
      cout<<"Would you like to calculate an average for 1.) tests, 2.) assignments, 3.)labs, 4.)recitations 5.)overall for the class, or 0.) to quit?"<<endl;
      cin>>x;
      if(x==1){
	 double test_avg = calculate_test_average();
	 cout<<"Your test average is: "<<test_avg<<endl;
      }
      else if(x==2){	
	 double assignment_avg = calculate_assignment_average();
	 cout<<"Your assignment average is: "<<assignment_avg<<endl;
      }
      else if(x==3){
	 double lab_avg = calculate_lab_average();
	 cout<<"Your lab average is: "<<lab_avg<<endl;
      }
      else if(x==4){
	 cout<<"Would you like to calculate an average for 1.) Quizzes 2.)Designs 3.) Critiques or 4.)Overall?"<<endl;
	 cin>>y;

	 if(y==1){
	    double quiz_avg = calculate_quiz_average();
	    cout<<"Your quiz average is: "<<quiz_avg<<endl;
	 }		
	 else if(y==2){
	    double design_avg = calculate_design_average();
	    cout<<"Your design average is: "<<design_avg<<endl;
	 }
	 else if(y==3){
	    double critique_avg = calculate_critique_average();
	    cout<<"Your critique average is: "<<critique_avg<<endl;
	 }
	 else if(y==4){
	    double recitation_avg = calculate_recitation_average();
	    cout<<"Your overall recitation average is: "<<recitation_avg<<endl;
	 }

      }
      else if(x==5){
	 double overall_grade = calculate_overall_grade();
	 cout<<"Your overall grade is: "<<overall_grade<<endl;
      }




   }while(x !=0);

   return 0;
}
