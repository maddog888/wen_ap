#include "wen_ap.h" //导入Wen_WiFi配网

void setup() {
  //定义串口
  Serial.begin(9600);
  // 启用WiFi配网
  ap_init();
}

void loop() {
  // WiFi配网服务一直放这就行-联网成功后是会自动跳过的
  ap_serve();
}