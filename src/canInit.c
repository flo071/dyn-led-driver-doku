void can_init(void) {
	/*
	 * PIN PORT INTERFACE USAGE MODE
	 *  39 PC15 CANIFRX1  LMM   D
 	 *  40 PC16 CANIFTX1  LMM   D
	 */
	
	// CAN 1
	// for peripheral functions, the GPER must be 0
	AVR32_GPIO.port[2].gper = 0<<15;
	AVR32_GPIO.port[2].gper = 0<<16;
	// Port C Pin 15 CANRX MODE D
	AVR32_GPIO.port[2].pmr0 = 1<<15; 
	AVR32_GPIO.port[2].pmr1 = 1<<15; 
	AVR32_GPIO.port[2].pmr2 = 0; 
	// Port C Pin 16 CANTX MODE D
	AVR32_GPIO.port[2].pmr0 = 1<<16; 
	AVR32_GPIO.port[2].pmr1 = 1<<16; 
	AVR32_GPIO.port[2].pmr2 = 0; 
	// CANIF channel 1
	AVR32_CANIF.channel[1].CANCFG.ovrm  = 1; // Overrun Mode
	AVR32_CANIF.channel[1].CANCFG.cmode = 0; // Normal Mode
	AVR32_CANIF.channel[1].CANCFG.sm    = 1; // Sampling Method
	AVR32_CANIF.channel[1].CANCFG.sjw   = 1; // Sync Jump width
	AVR32_CANIF.channel[1].CANCFG.prs   = 1; // Propagation segment
	// Init CAN channel 1
	AVR32_CANIF.channel[1].CANCTRL.wken = 1; // CAN Interrupt wake enabled
	AVR32_CANIF.channel[1].CANCTRL.ovrq = 0; // Overloads will not be handled
	AVR32_CANIF.channel[1].CANCTRL.cen  = 1; // Enable channel for requests
	AVR32_CANIF.channel[1].CANCTRL.init = 1; // Init CAN channel 1
}