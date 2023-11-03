int Roof_light = 13;
int Left_Fan = 12;
int left_Light = 11;
int Night_Bulb = 10;
int Right_light = 9;


void setup()
{
  Serial.begin(9600);
  pinMode (Roof_light, OUTPUT);
  pinMode (Left_Fan, OUTPUT);
  pinMode (left_Light, OUTPUT);
  pinMode (Night_Bulb, OUTPUT);
  pinMode (Right_light, OUTPUT);

}

void loop()

{
  int c = Serial.parseInt();

  //Roof_light
  if (c == 1)
  {
    digitalWrite(Roof_light, HIGH);
    Serial.println("Roof_light ON");
  }
  else if (c == 2)
  {
    digitalWrite(Roof_light, LOW);
    Serial.println("Roof_light OFF");
  }

  //Left_Fan

  else if (c == 3)
  {
    digitalWrite(Left_Fan, HIGH);
    Serial.println("Left_fan ON");
  }
  else if (c == 4)
  {
    digitalWrite(Left_Fan, LOW);
    Serial.println("Left_Fan OFF");
  }

  //left_Light


  else if (c == 5)
  {
    digitalWrite(left_Light, HIGH);
    Serial.println("left_Light ON");
  }
  else if (c == 6)
  {
    digitalWrite(left_Light, LOW);
    Serial.println("left_Light OFF");
  }


  //Night_Bulb


  else if (c == 7)
  {
    digitalWrite(Night_Bulb, HIGH);
    Serial.println("Night_Bulb ON");
  }
  else if (c == 8)
  {
    digitalWrite(Night_Bulb, LOW);
    Serial.println("Night_Bulb OFF");
  }


  //Right_light



  else if (c == 9)
  {
    digitalWrite(Right_light, HIGH);
    Serial.println("Right_light ON");
  }
  else if (c == 10)
  {
    digitalWrite(Right_light, LOW);
    Serial.println("Right_light OFF");
  }


}
