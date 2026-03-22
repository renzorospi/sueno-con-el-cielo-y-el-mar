 int c = 0;
void setup() { // put your setup code here, to run once:

 Wire.begin(1, 2); 
  
  // 2. Iniciar la pantalla
  u8g2.begin();
  
  // 3. ¡ESTA ES LA CLAVE! Subir la velocidad del bus a 400kHz o 800kHz
  u8g2.setBusClock(800000);
  u8g2.clearBuffer();
  u8g2.setDrawColor(0);

}

void loop() { // put your main code here, to run repeatedly:

for (int c = 1; c <=900; c++) { // videos de 30s a 30fps

  u8g2.firstPage();

  do

  {

    u8g2.drawXBMP( 0, 0, u8g_logo_width, u8g_logo_height, frames[c]);

  } while ( u8g2.nextPage() );

  //delay(20);

c++;
};
}
