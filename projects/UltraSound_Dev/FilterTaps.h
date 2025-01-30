// bandpass filter taps around 32kHz frequency in order to clean up the signal and 
// remove audible sound disturbances

#define FILTER_TAP_NUM 100

static double filter_taps[FILTER_TAP_NUM] = {
  -0.000795933, -9.27372e-05, 0.000737477, 0.00148983, 0.00192608, 0.0018259, 0.00106519, -0.000298922, -0.00197487, -0.00345721, -0.00414466,
  -0.00354197, -0.00148753, 0.00168182, 0.00511734, 0.00764438, 0.00812513, 0.00589665, 0.00112887, -0.00505498, -0.0107912, -0.0140063, -0.0131252,
  -0.00772304, 0.00112925, 0.0110014, 0.018746, 0.0214864, 0.0176449, 0.0076496, -0.0059667, -0.0191823, -0.0276779, -0.0282515, -0.0199895, -0.00477232,
  0.0131143, 0.0282006, 0.0355357, 0.0323323, 0.0189994, -0.000814917, -0.0212381, -0.0359575, -0.0402201, -0.0323993, -0.0146016, 0.00791077, 0.028321, 0.0403815,
  0.0403815, 0.028321, 0.00791077, -0.0146016, -0.0323993, -0.0402201, -0.0359575, -0.0212381, -0.000814917, 0.0189994, 0.0323323, 0.0355357, 0.0282006, 0.0131143,
  -0.00477232, -0.0199895, -0.0282515, -0.0276779, -0.0191823, -0.0059667, 0.0076496, 0.0176449, 0.0214864, 0.018746, 0.0110014, 0.00112925, -0.00772304, -0.0131252,
  -0.0140063, -0.0107912, -0.00505498, 0.00112887, 0.00589665, 0.00812513, 0.00764438, 0.00511734, 0.00168182, -0.00148753, -0.00354197,
  -0.00414466, -0.00345721, -0.00197487, -0.000298922, 0.00106519, 0.0018259, 0.00192608, 0.00148983, 0.000737477, -9.27372e-05, -0.000795933
};