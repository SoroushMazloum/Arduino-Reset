const int __Reset__ = A1;

void setup() {  
  delay(1000);
  digitalWrite(__Reset__, HIGH);
  delay(200); 
  pinMode(__Reset__, OUTPUT);     
}
void loop() 
{
  delay(3000);               
  digitalWrite(__Reset__, LOW);
}