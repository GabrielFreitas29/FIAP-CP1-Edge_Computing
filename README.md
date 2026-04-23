# 📊 Medição da Luminosidade do Ambiente

## 📝 Descrição do Projeto

Este projeto consiste no desenvolvimento de um sistema de monitoramento de luminosidade para a **Vinheria Agnello**, utilizando a plataforma Arduino em conjunto com um sensor LDR (*Light Dependent Resistor*).

O objetivo é medir a intensidade de luz no ambiente e indicar, em tempo real, se as condições estão adequadas para a conservação dos vinhos, utilizando sinais visuais (LEDs) e sonoros (buzzer).

---

## ⚙️ Funcionamento

O sistema realiza a leitura da luminosidade através do sensor LDR e classifica o ambiente em três estados:

- 🟢 **Condição adequada (ambiente escuro)**  
  LED verde aceso  

- 🟡 **Nível de alerta (luminosidade moderada)**  
  LED amarelo aceso  

- 🔴 **Condição crítica (alta luminosidade)**  
  LED vermelho aceso  
  Buzzer acionado por 3 segundos  

Os limites de luminosidade são definidos no código e podem ser ajustados conforme o ambiente.

---

## 🔩 Componentes Utilizados

- 1x Arduino Uno  
- 1x Sensor LDR  
- 3x LEDs (verde, amarelo e vermelho)  
- 3x Resistores (220Ω para os LEDs)  
- 1x Resistor (10kΩ para o LDR)  
- 1x Buzzer  
- 1x Protoboard  
- Jumpers (fios de conexão)  

---

## 🔌 Montagem do Circuito

### Conexões:

- **LDR:**
  - Um lado no 5V  
  - Outro lado no A0 e no resistor de 10kΩ  
  - O resistor vai para o GND  

- **LED Verde:**
  - Pino 10 → resistor → LED → GND  

- **LED Amarelo:**
  - Pino 11 → resistor → LED → GND  

- **LED Vermelho:**
  - Pino 12 → resistor → LED → GND  

- **Buzzer:**
  - Pino 8 → positivo  
  - GND → negativo  

---

## 💻 Dependências

- Arduino IDE instalada  

---

## ▶️ Como Reproduzir o Projeto

1. Instale a Arduino IDE  
2. Monte o circuito conforme descrito acima ou no simulador (Tinkercad/Wokwi)  
3. Conecte o Arduino ao computador via USB  
4. Abra o código do projeto na IDE  
5. Selecione a placa (Arduino Uno) e a porta correta  
6. Faça o upload do código  
7. Observe os LEDs e o buzzer reagindo à luminosidade  

---

## 🔗 Simulação no Tinkercad

https://www.tinkercad.com/things/a6Kkqbhf3eS-monitoramento-vinheira?sharecode=eC05ODI3YGTU5_Qs6p3BFJe7yhQFRCd8a08SgBKI6eI    

---

## 🔗 Repositório

O código-fonte completo e os arquivos do projeto estão disponíveis em:

https://github.com/GabrielFreitas29/FIAP-CP1-Edge_Computing

---

## 🧪 Observações

- Os valores de luminosidade podem variar no Tinkercad  
- Caso necessário, ajuste os limites diretamente no código  
- Utilize o Monitor Serial para visualizar os valores do sensor em tempo real  

---

## 👥 Integrantes

- **570881 · Gabriel Freitas da Silva Carvalho**  
- **572892 · Erick Martins Picolo**  
- **572171 · Guilherme Marcon Dantas**  
- **569782 · Luiz Felipe Cardoso de Oliveira**  

---
