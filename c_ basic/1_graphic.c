#include<graphics.h>
#include<stdio.h>
void main()
{
int gd=0,gm;       /* gd=3 */           
//here 3 is unique no. of graphical driver 
//gm means graphic mode , which decides graphics driver kis mode me kam karega
//yani ek graphic driver kayi mode pe kam kr sakata hai jis ke us ke resolution or colour avalability me fark ayega 
//ab hame pata hi nhi hai graphic driver ki value 0 or graphic mode ki value rakhate hi nhi hai , jiska matlb hoga auto detection
//i.e select according to best suitable graphic driver or mode or yeh bat hum kah kis se rahe hai , jo graphics ko karega initialize or es ko initialize karega initgraph() function 
//intigraph() function ke andar hum pass karege address of gd
//kyu ki agar initfunction agar gd ki address access karega toh yeh keval gd ki value access kar sakate hai balaki zarurat padane pr es mr value rkh bhi sakata hai 
//or sath me hum ne gm ka address bhi pass kiya 
//toh jaisa hum ne yaha gd=0 and gm ki value nhi rakhi hai toh intigraph function khud detect kr ke es me value assign kr dega 
//or 3rd argument me graphics driver wala fath hum dete hai pr yaha hum khali chod rahe hai toh khud default location se path utha lega 
initgraph(&gd,&gm,""); //function to change text mode of screen to graphical mode
//ab es ke bad hum chahe toh graphics wala kam kr sakate hai kyu ki graphical mode initialize ho gaya hai 
//now hame circle banane ke leye ek predefined function hai circle
circle(100,80,20);  
//es me pahala argument hai x coordinate, second is y coordinate in pixels,i.e (x,y) which indicate the center of circle
//and in 3rd we pass the radius
//then we use closegraph(); to close the graph
closegraph();
}

