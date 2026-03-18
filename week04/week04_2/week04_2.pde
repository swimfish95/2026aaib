//week04-2 for loop + if judge
void setup(){
  size(600,400);
}
void draw(){
  for(int y=0;y<400;y+=50){
    for(int x=0;x<600;x+=50){
      if(x <mouseX&&mouseX<x+50)fill(#74FFE4);
      else if(y <mouseY&&mouseY<y+50)fill(#74FFE4);
      else fill(#FFFFF2);
      rect(x,y,50,50);
    }
  }
}  
