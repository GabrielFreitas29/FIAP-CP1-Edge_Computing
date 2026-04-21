# 📊 Medição da luminosidade do ambiente

## Descrição do Projeto

Este projeto consiste no desenvolvimento de um sistema de monitoramento de luminosidade para a **Vinheria Agnello**, utilizando a plataforma Arduino em conjunto com um sensor LDR (Light Dependent Resistor).

O objetivo é medir a intensidade de luz no ambiente e indicar, em tempo real, se as condições estão adequadas para a conservação dos vinhos, utilizando sinais visuais (LEDs) e sonoros (buzzer).

---

## Funcionamento

O sistema realiza a leitura da luminosidade através do sensor LDR e classifica o ambiente em três fases:

- 🟢 **Condição adequada**  
  LED verde aceso  

- 🟡 **Nível de alerta**  
  LED amarelo aceso  

- 🔴 **Condição crítica**  
  LED vermelho aceso  
  Buzzer acionado por 3 segundos  

Os limites de luminosidade podem ser ajustados diretamente no código.

---

## Componentes Utilizados

- Arduino (Uno, Nano ou similar)
- Sensor LDR
- 3 LEDs (verde, amarelo e vermelho)
- 1 buzzer
- Resistores
- Protoboard
- Jumpers

---

## Dependências

- Arduino IDE instalada  

---

## Montagem do Circuito

### Conexões básicas:

AINDA PENDENTE

---

## Como Reproduzir o Projeto

1. Instale a Arduino IDE
2. Conecte o Arduino ao computador via USB
3. Monte o circuito conforme descrito no vídeo
4. Abra o código do projeto na IDE
5. Selecione a placa e a porta correta
6. Faça o upload do código
7. Observe os LEDs e o buzzer reagindo à luminosidade
