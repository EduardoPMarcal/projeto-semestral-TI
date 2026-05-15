//DHT22 lê temperatura e umidade; LCD exibe os valores atualizados a cada 2 segundos;
#include <DHT.h>
#include <LiquidCrystal.h>
#define DHTPIN 8     // Pino onde o DHT22 está conectado
#define DHTTYPE DHT22   // Tipo do sensor DHT
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Pinos do LCD: RS=12, E=11, D4=5, D5=4, D6=3, D7=2
void setup() {
  delay(500); // Aguarda o LCD inicializar
  lcd.begin(16, 2); // Inicializa o LCD com 16 colunas e 2 linhas
  lcd.print("Iniciando..."); // Mostra mensagem de inicialização
  delay(1000);
  dht.begin(); // Inicializa o sensor DHT22
}
void loop() {
  float humidity = dht.readHumidity(); // Lê a umidade
  float temperature = dht.readTemperature(); // Lê a temperatura em Celsius
  lcd.clear(); // Limpa o LCD
  lcd.setCursor(0, 0); // Define o cursor para a primeira linha
  lcd.print("Temp: "); // Exibe "Temp: "
  lcd.print(temperature); // Exibe a temperatura
  lcd.print(" C"); // Exibe " C"
  lcd.setCursor(0, 1); // Define o cursor para a segunda linha
  lcd.print("Umid: "); // Exibe "Umid: "
  lcd.print(humidity); // Exibe a umidade
  lcd.print(" %"); // Exibe " %"
  delay(2000); // Aguarda 2 segundos antes de atualizar os valores
}

