//week03-2 process 結合for()+if()
//ctrl+n
void setup() {
  size(800, 100);
}
void draw() {
  background(#61DE1B); //tool color choosen
  for (int x=0; x<800; x +=100) {
    if (x<mouseX&&mouseX<x+100)fill(0, 255, 0);
    else fill(#20241E);
    rect(x, 0, 100, 100);
  }
}
