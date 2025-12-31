#include "def.h"
#include <stdint.h>

void UART_Init();
void UART0_Transmit(char data);
int UART0_PutChar(char data, FILE *stream);
unsigned UART0_Receive();

extern FILE OUTPUT;
volatile extern char rxBuff[100];
volatile extern uint8_t rxFlag;