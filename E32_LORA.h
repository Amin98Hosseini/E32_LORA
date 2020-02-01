
#define M0 GPIO_PIN_11
#define M1 GPIO_PIN_12
#define AUX GPIO_PIN_8

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_I2C1_Init(void);
static void MX_I2C2_Init(void);
static void MX_USART1_UART_Init(void);
static void MX_RTC_Init(void);

void puts_str(char *str);
void E32_Mode(int a);
void E32_Send(char *Data);
void E32_Recive(char *Data);
void E32_Reset();
void E32_Version(char *Data);
void E32_Op(char *Data);
