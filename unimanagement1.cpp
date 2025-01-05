#include<iostream>
using namespace std;
int main(){
    string student1;
    string student2;
    string student3;
    short totalMarks=50;
    short csAvailableSeats;
    short seAvailableSeats;
    short csEnrolledStudent;
    short seEnrolledStudent;
    cout<<"enter the name of student 1"<<endl;
    cin>>student1;
    short subjectMarks1;
    cout<<"enter subject marks of student 1"<<endl;
    cin>>subjectMarks1;
    string cnic1;
    cout<<"enter cnic no of student 1"<<endl;
    cin>>cnic1;
    string phoneNo1;
    cout<<"enter phone no of student 1"<<endl;
    cin>>phoneNo1;
    string rollNo1;
    cout<<"enter roll no of student 1"<<endl;
    cin>>rollNo1;
    float percentage1=(subjectMarks1/totalMarks)*100;
    cout<<"percentage of student 1 is = "<<percentage1<<endl;
   if (csAvailableSeats > 0) {
    cout << "Student 1 got admission in CS." << endl;
    csAvailableSeats--;
    csEnrolledStudent++;
} else if (percentage1 > 70 && seAvailableSeats > 0) {
    cout << "Student 1 did not get admission in CS because seats are not available." << endl;
    cout << "Student 1 got admission in SE." << endl;
    seAvailableSeats--;
    seEnrolledStudent++;
} else {
    cout << "Student 1 did not get admission in CS or SE." << endl;
}
    cout<<"enter the name of student 2"<<endl;
    cin>>student2;
    short subjectMarks2;
    cout<<"enter subject marks of student 2 "<<endl;
    cin>>subjectMarks2;
    string cnic2;
    cout<<"enter cnic no of student 2"<<endl;
    cin>>cnic2;
    string phoneNo2;
    cout<<"enter phone no of student 2"<<endl;
    cin>>phoneNo2;
    string rollNo2;
    cout<<"enter roll no of student 2"<<endl;
    cin>>rollNo2;
    float percentage2=(subjectMarks2/totalMarks)*100;
    cout<<"percentage of student 2 is = "<<percentage2<<endl;
    if(csAvailableSeats>0){
        cout<<"student 2 got admission in cs"<<endl;
        csAvailableSeats--;
        csEnrolledStudent++;
    } else if(percentage2>60&& seAvailableSeats<0){
    cout<<"student 2 got not admission in cs"<<endl;
    cout<<"student 2 got admission in se"<<endl;
    } else{
        cout<<"student 2 got not admission in  se"<<endl;
    }
    cout<<"enter the name of student3"<<endl;
    cin>>student3;
    short subjectMarks3;
    cout<<"enter subject marks of student 3 "<<endl;
    cin>>subjectMarks3;
    string cnic3;
    cout<<"enter cnic no of student 3"<<endl;
    cin>>cnic3;
    string phoneNo3;
    cout<<"enter phone no of student 3"<<endl;
    cin>>phoneNo3;
    string rollNo3;
    cout<<"enter roll no of student 3"<<endl;
    cin>>rollNo3;
    float percentage3=(subjectMarks3/totalMarks)*100;
    cout<<"percentage of student 3 is = "<<percentage3<<endl;
    if(csAvailableSeats>0){
        cout<<"student 3 got admission in cs"<<endl;
        csAvailableSeats--;
        csEnrolledStudent++;
    } else if(seAvailableSeats>0&&percentage3>70){
    cout<<"student 3 got not admission in cs"<<endl;
    cout<<"student 3 got admission in se"<<endl;
    } else{
        cout<<"student 3 got not admission in se"<<endl;
    }
    return 0;
  
}