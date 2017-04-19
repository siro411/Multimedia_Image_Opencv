#include <iostream>
#include <string>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <resize.hpp>

using namespace std;
using namespace cv;
int main( int argc, const char** argv )
{
int choice;
  cout<<"-----------------------NEW BEE----------------------------";
  cout<<"-------------MENU---------------";
  cout<<"1.Dilation";
cout<<"2.Erosion";
cout<<"3.Lighten";
cout<<"4.Darken";
cout<<"5.Panorama";
cout<<"6.Stitching";
cout<<"7.Resizing";

cout<<"8.Help/Description";
cout<<"Enter your choice";
cin>>choice;
Action * action;
switch(choice) {
      case '1' :
         cout << "Dilation" << endl; 
action=new dilation();
         break;
      case '2' :
cout << "Erosion" << endl;
action=new erosion();
         break;
      case '3' :
         cout << "Lighten" << endl;
action=new lighten();
         break;
      case '4' :
         cout << "Darken" << endl;
action=new darken();
         break;
	case '5' :
         cout << "Panorama" << endl;
action=new panorama();
         break;
case '6' :
         cout << "Stitching" << endl;
action=new stitching();
         break;
case '7' :
         cout << "Resizing" << endl;
action=new resize();
         break;
case '8' :
         cout << "Help/Description" << endl;
action=new help_description();
         break;  
default :
        cout << "Invalid Option Try again........" << endl;
  return 0;
}
