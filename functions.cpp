#include <iostream>
using namespace std;

string box(int width, int height){
  string box = "";

  //represents the height
  for(int i=0; i<height; i++){
    //represents the width
    for(int j=0; j<width; j++){
      box+="*";
    }
    box+="\n";
  }
return box;
}

string checkerboard(int width, int height){

  string s = "";
  //represents the height
  for(int i=0; i<height; i++){
    //represents the width
    for(int j=0; j<width; j++){
      //i or j % 2 determines even or odd rows/cols
      if(i % 2 == 0 && j % 2 == 0)
        s+="*";
      if(i % 2 == 0 && j % 2 == 1)
        s+=" ";
      if(i % 2 == 1 && j % 2 == 0)
        s+=" ";
      if(i % 2 == 1 && j % 2 == 1)
        s+="*";
      }
    s+="\n";
  }
  return s;
}

string cross(int size){
    string cross = "";
     for(int row=0; row<size; row++){
    for(int col=0; col<size; col++){
      //if rows and columns are equal, *
      //if cols and size-(row+1) are equal, *
      if(row == col || col == size-(row+1))
        cross+="*";
      else
        cross+=" ";
    }
    cross+="\n";
  }
return cross;
}

string lower(int length){
    string lower = "";
    for(int row=1; row <=length; row++){
    for(int col=1; col<=length; col++){
      //if col # is less than or equal to the row #
      if(col<=row)
        lower+="*";
      else
        lower+=" ";
    }
    lower+="\n";
  }
  return lower;
}

string upper(int length){
    string upper = "";
    for(int row=length; row >=1; row--){
    for(int col=length; col>=1; col--){
      //if col # is less than or equal to the row #
      if(col<=row)
        upper+="*";
      else
        upper+=" ";
    }
    upper+="\n";
  }
  return upper;
}

string trapezoid(int width, int length){
    string result = "";
  //checks if the shape is impossible
  if( (length > 0.5 * width) || length <=0){
    cout<<"Impossible Shape\n";
  }
  else{
  
    for(int row = 0; row < length; row++){
      for(int x = 0; x < row; x++){
        result+=" ";
      }
      for(int stars = 0; stars < width - (row * 2); stars++){
        result+="*";
      }
      for(int x = 0; x < row; x++){
        result+=" ";
      }
      result+="\n";
    }
  result+="\n";
    }
    return result;
}   

string checkerboard3x3(int width, int height){
    string result = "";
    bool printstar = true;
    int counter = 0, changecounter = 0; 
    string stars = "*";
    string spaces = " ";

    for(int x = 0; x < height; x++){
        for(int y = 0; y < width; y++){
            if(printstar)
                result+=stars;
            else
                result+=spaces;
            
            counter++; //counts to check if 3 stars or spaces have been printed

            if(counter == 3){
                counter = 0; //reset
                if(printstar)
                    printstar = false; //switch to spaces
                else
                    printstar = true;
            }
        }
        result +="\n"; //end of the row
        counter = 0; 

        if(printstar)
            printstar = false; //switch to spaces
        else
            printstar = true; //switch to stars

        if(x % 3 == 2)
            changecounter++;

        if(changecounter % 2 !=0){ //switch symbols
            stars = " ";
            spaces = "*";
        }
        
        else{
            stars = "*";
            spaces = " ";
            }
        
        }
        return result;
    }

