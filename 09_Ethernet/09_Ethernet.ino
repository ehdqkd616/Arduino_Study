
//byte mac[] = {}; // mac 주소 입력

//#include <SPI.h>
#include <Ethernet.h>
//#include <TextFinder.h>

//Ethernet Shield MAC address 
byte mac[] = {0xDD, 0xED, 0xFE, 0xEE, 0xFF, 0xDB};

IPAddress ip(192,168,10,230);

EthernetServer server(80);
//IPAddress subnet(255,255,255,0);
//IPAddress gateway(192,168,10,1);
//IPAddress dns_local(164,124,101,2);

#define RED_PORT 8

boolean statusLED = false;
String buffer = ""; // 수신 데이터 버퍼


void setup() {
  Serial.begin(9600);

  Ethernet.begin(mac, ip);

  Serial.println("WebServer Control LED");
  Serial.print("Server is at ");
  Serial.println(Ethernet.localIP());

  delay(2000);

  pinMode(RED_PORT, OUTPUT);
  digitalWrite(RED_PORT, LOW);
  
}

void loop() {
  EthernetClient client = server.available(); // 수신 클라이언트가 있는지 확인
//  Serial.println(client);
  
  if(client){
    int response_type = -1;
    Serial.println("** new Client Connected...");
  
    while(client.connected()){
      boolean empty_line = read_one_line(client);
      Serial.println(buffer);
  
      if(buffer.indexOf("GET /led.cgi?LEDStatus=1") >= 0){
        show_on_off_page(client, true);
      } else if(buffer.indexOf("GET /led.cgi?LEDStatus=0") >= 0){
        show_on_off_page(client, false);
      }
    }
  }
}

boolean read_one_line(EthernetClient client){
  buffer = "";

  while(client.available()){
    char c = client.read(); // 바이트 데이터 읽기
    if(c == '\r'){
      client.read();
      break;
    }

    buffer = buffer + c;
  }

  return (buffer.length() == 0);
}

void show_on_off_page(EthernetClient client, boolean status){
  statusLED = status;
  digitalWrite(RED_PORT, status);

  String str = "LED 상태 : ";
  Serial.println(str + (status ? "HIGH" : "LOW"));
  
  // HTML 헤더
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println();

  // HTML 내용
  client.println("<html>");
  client.println("<body><script>");
  client.println("window.location.href=\"http://192.168.10.231:9620/Servlet_Arduino/\";");
  client.print("alert('Currently... LED is ");
  client.println(statusLED ? "ON.');" : "OFF.');");
  client.println("</body></script>");
  client.println("</html>");  
  
}
