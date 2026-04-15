// week08-4 很多會飛的氣球
// 修改自week08-3 會飛的氣球
void setup() {
  size(500, 500); // 視窗大小
  img = loadImage("balloon.png"); // 讀入圖片
}

PImage img; // 圖片宣告 (要再拉一次balloon.png到程式裡)
float [] x = new float[100]; // Java的陣列，用來存最多 100 個 x 座標
float [] y = new float[100]; // 存 y 座標
float [] s = new float[100]; // 存每一顆氣球的縮放大小
int N = 0; // 現在有 0 個氣球 (用來計數)
float s2 = 0.1; // 滑鼠正在按著的「目前這顆」氣球的大小

void draw() {
  background(255); // 白色背景
  
  // 1. 處理「正在吹」的氣球
  if (mousePressed) {
    s2 *= 1.05; // 氣球越來越大 (膨脹速度改為 1.05 倍)
    image(img, mouseX-(96*s2)/2, mouseY-(132*s2), 96*s2, 132*s2);
  } else {
    s2 = 0.1; // 如果沒按滑鼠，把準備吹的氣球大小重置回 0.1
  }
  
  // 2. 處理「已經飛出去」的所有氣球
  for (int i=0; i<N; i++) { // 畫很多氣球，目前有 N 顆就跑 N 次
    image(img, x[i], y[i], 96 * s[i], 132 * s[i]);
    if (y[i] > 0) y[i] -= 1; // 讓每顆氣球慢慢往上飛 (Y座標遞減)
  }
}

void mouseReleased() {
  // 當放開滑鼠時，把剛才吹好的氣球數據，存進陣列的第 N 格
  s[N] = s2;
  x[N] = mouseX-(96*s2)/2; // x座標 (變數設定)
  y[N] = mouseY-(132*s2);  // y座標
  N++; // 氣球總數增加 1 顆！(準備記錄下一顆)
}
