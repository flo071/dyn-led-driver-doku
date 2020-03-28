float calculateResistor(float U) {
	float R=pow((U-2)/200, -(1/1.1));
	return R;
}			