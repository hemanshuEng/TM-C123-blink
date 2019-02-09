#include "stdint.h"
#include "stdbool.h"
#include "driverlib/gpio.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "Delay.h"
/**
 * main.c
 */
int main(void)
{
    volatile uint32_t ui32loop;
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF)){

    }
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2);

    while(1){
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0b100);
        SoftDelayMs(500);
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0b000);
        SoftDelayMs(500);
    }


}
