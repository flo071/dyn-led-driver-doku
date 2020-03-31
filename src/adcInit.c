void adc_init(void) {
	// GPIO Ports initialisieren
	AVR32_GPIO.port[0].gper = 0 << 8;
	AVR32_GPIO.port[0].pmr0 = 0; AVR32_GPIO.port[0].pmr1 = 0; AVR32_GPIO.port[0].pmr2 = 0; // PORT A PIN 8 MODE A
	
	// Interne Register initialisieren
	AVR32_ADCIFA.CR.tstart = 1;
	AVR32_ADCIFA.CR.tstop = 1;
	AVR32_ADCIFA.CR.soc0 = 1;
	AVR32_ADCIFA.CFG.adcen = 0;
	AVR32_ADCIFA.CFG.muxset = 0;
	AVR32_ADCIFA.CFG.exref = 0;
	AVR32_ADCIFA.CFG.shd = 1;
	AVR32_ADCIFA.CFG.rs = 1;
	AVR32_ADCIFA.CFG.frm = 0;
	AVR32_ADCIFA.CFG.ssmq = 1;
	AVR32_ADCIFA.CFG.sleep = 0;
	AVR32_ADCIFA.CFG.adcen = 1;
}