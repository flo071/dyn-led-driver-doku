void dac_init(void) {
	// GPIO Ports initialisieren
	AVR32_GPIO.port[0].gper = 0<<20; 
	AVR32_GPIO.port[0].pmr0 = 0;
	AVR32_GPIO.port[0].pmr1 = 1<<20;
	AVR32_GPIO.port[0].pmr2 = 0; // PORT A PIN 20 MODE C 
	
	// Interne Register initialisieren
	AVR32_DACIFB0.CR.arae = 1;
	AVR32_DACIFB0.CR.trae = 0;
	AVR32_DACIFB0.CR.aoe = 1; // Enable channel A
	AVR32_DACIFB0.CR.en = 1; // Enable DAC
}