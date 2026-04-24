// Definição dos Pinos
const int ldrPin = A0;
const int ledVermelho = 10;
const int ledAmarelo = 11;
const int ledVerde = 12;
const int buzzer = 8;

// Variáveis de Controle
bool jaAvisouOK = false; 

// --- PARÂMETROS INVERTIDOS PARA SUA ADEGA ---
// No seu sensor: 1020 é escuro total. 
const int LIMITE_ALERTA = 900;   // Se cair abaixo de 900, sai do Verde
const int LIMITE_PROBLEMA = 500; // Se cair abaixo de 500, entra no Vermelho

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  Serial.println("Monitoramento Vinheria Agnello - Ativado");
}

void loop() {
  int valorLuz = analogRead(ldrPin);
  Serial.print("Nivel de Luz: ");
  Serial.println(valorLuz);

  // --- ESTADO: OK (MUITO ESCURO / IDEAL) ---
  // Se o valor for ALTO (ex: 1015), o ambiente está escuro.
  if (valorLuz >= LIMITE_ALERTA) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo,HIGH);
    digitalWrite(ledVermelho, HIGH);
    noTone(buzzer);
    
    if (jaAvisouOK == false) {
      tone(buzzer, 1500); 
      delay(200);
      noTone(buzzer);
      jaAvisouOK = true; 
    }
  } 
  
  // --- ESTADO: ALERTA (LUZ MODERADA) ---
  // Se o valor está entre 500 e 900.
  else if (valorLuz < LIMITE_ALERTA && valorLuz >= LIMITE_PROBLEMA) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    noTone(buzzer);
    
    jaAvisouOK = false; 
  } 
  
  // --- ESTADO: PROBLEMA (MUITA LUZ) ---
  // Se o valor cair abaixo de 500.
  else {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
    
    jaAvisouOK = false; 

    tone(buzzer, 1000); 
    delay(1000); // Reduzi para 1s para o sistema ser mais responsivo
    noTone(buzzer);
  }

  delay(500); 
}