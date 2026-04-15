// week08-2 會跟著 mouse 移動的氣球
// Ctrl-N 新視窗
void setup() {
  size(500, 500); // 視窗大小
  img = loadImage("balloon.png"); // 讀入圖片
}

PImage img; // 圖片宣告 (要再拉一次balloon.png到程式裡)
int x, y; // 變數宣告

void draw() {
  background(255); // 白色背景 (每畫一次都要清除舊的畫面)
  
  x = mouseX - 96/2; // x座標 (讓游標對準氣球中心)
  y = mouseY - 132;  // y座標 (讓游標對準氣球底部)
  
  image(img, x, y, 96, 132); // 照著計算好的座標畫氣球
  
  // 也可以寫成下面這樣，直接把算式放進去，不用 x, y 變數：
  // image(img, mouseX - 96/2, mouseY - 132, 96, 132); 
}
