#include <iostream>

string box(int width, int height){
  string box = "";

  cout<<"\nShape: \n";
  //represents the height
  for(int i=0; i<height; i++){
    //represents the width
    for(int j=0; j<width; j++){
      box+="*";
    }
    box+="\n";
  }

}