void spi_init(void) {
	// GPIO Ports initialisieren
	/*
	 * PIN PORT INTERFACE USAGE    MODE
	 *  47 PD00 SPI0MOSI  Dig.Pot. A
 	 *  48 PD01 SPI0MISO  Dig.Pot. A
	 *  49 PD02 SPI0SCK   Dig.Pot. A
	 *  50 PD03 SPI0CS    Dig.Pot. A
	 */
	
	// SPI 0
	// for peripheral functions, the GPER must be 0
	AVR32_GPIO.port[3].gper = 0<<00;
	AVR32_GPIO.port[3].gper = 0<<01;
	AVR32_GPIO.port[3].gper = 0<<02;
	AVR32_GPIO.port[3].gper = 0<<03;
	
	AVR32_SPI0.CR.spien = 1; // Enable SPI
	AVR32_SPI0.MR.ps = 0;    // Select peripheral device directly
	AVR32_SPI0.MR.mstr = 1;  // SPI Master Mode
}