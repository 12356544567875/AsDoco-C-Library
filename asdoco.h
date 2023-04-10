// Copyright (c) ghgltggamer
// Written by ghgltggamer
// started writting at - 18:16pm , 2023/04/10
// Finished at - 18:55

// Source

// Header files

#include <iostream>
#include <stdlib.h>
#include <fstream>

// header Files - end

// namespace

using namespace std;

// nameaspace - end

// datatypes

// num
typedef int num;

// alph
typedef string alph;

// trfa
typedef bool trfa;

// dec
typedef float dec;



// datatypes - end


// write function


int write_text(alph write_t){
	cout<<write_t;
}

int write_number(num write_n){
	cout<<write_n;
}


// write function - end


// template 

class TEMPLATE {
	public:
		class USE_T{
			public:
				int codeEditor(){
					for (int lines = 1;lines <=999999;lines++){
						system("color 3");
						cout<<lines<<". }";
						alph code;
						cin>>code;
					}
				}
				
				
				int processing(){
					for (int progress = 1;progress <= 100;progress++){
						cout<<"processing"<<progress<<"%"<<endl;
					}
				}
		};
		USE_T use;
};

// template - end


// linespacing

int lineSpacing(num Spacing = 1){
	for (int Lines_Spacing = 1;Lines_Spacing <= Spacing;Lines_Spacing++){
		cout<<" ";
	}
}

// linespacing - end

// new Line 

int newLine(num lines_n = 1){
	for (num newLines = 1;newLines <= lines_n;newLines++){
		cout<<endl;
	}
}

// new Line - end


// Shader

class SHADER {
	public:
		// setTextColor
		
		// colors
		
		const string red = "red";
		const string blue = "blue";
		const string yellow = "yellow";
		const string green = "green";
		const string aqua = "aqua";
		const string lime = "lime";
		int setTextColor(alph color_name){
			
			// red
			if (color_name == red){
				system("color 4");
			}
			
			// blue
			else if (color_name == blue){
				system("color 1");
			}
			
			// green
			else if (color_name == green){
				system("color 2");
			}
			
			
			// lime
			else if (color_name == lime){
				system("color A");
			}
			
			
			// yellow
			else if (color_name == yellow){
				system("color 6");
			}
			
			
			// aqua
			else if (color_name == aqua){
				system("color 3");
			}			
		}
};

// Shader - end


// output function

int main(){
//	TEMPLATE temp;
	//temp.use.codeEditor();
	// temp.use.processing();
	SHADER myShader;
	myShader.setTextColor("blue");
	newLine(23);
	lineSpacing(20);
	alph text = "myText";
	write_text(text);
}
