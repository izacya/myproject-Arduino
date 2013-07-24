void setup()
{
  pinMode(4,OUTPUT);//モータ用のピンの出力設定
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int v0,v1;
  
  v0 = analogRead(0);//0番ピン(右のセンサー)の値を読み込む
  if(v0 > 212)//白い部分だった場合
  {
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    analogWrite(6,128);
  }
  else{
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    analogWrite(6,128);
  }
  v1 = analogRead(1);
  if(v1 > 182)//白い部分だった場合
  {
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    analogWrite(9,128);
  }
  else{
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    analogWrite(9,128);
  }
  Serial.println(v0);
  //Serial.print("\t");
  //Serial.println(v1);
}

  
