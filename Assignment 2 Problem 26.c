/* Assignment 2 Problem 26: Finf e^0.2x for x=0(0.01)1
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	float i,r;
	for(i=0;i<=1;i+=0.01)
	{
		r=exp(0.2*i);
		printf("\ne^0.2x when x= %f is = %f",i,r);
	}
	return 0;
}

/* Output

e^0.2x when x= 0.000000 is = 1.000000
e^0.2x when x= 0.010000 is = 1.002002
e^0.2x when x= 0.020000 is = 1.004008
e^0.2x when x= 0.030000 is = 1.006018
e^0.2x when x= 0.040000 is = 1.008032
e^0.2x when x= 0.050000 is = 1.010050
e^0.2x when x= 0.060000 is = 1.012072
e^0.2x when x= 0.070000 is = 1.014098
e^0.2x when x= 0.080000 is = 1.016129
e^0.2x when x= 0.090000 is = 1.018163
e^0.2x when x= 0.100000 is = 1.020201
e^0.2x when x= 0.110000 is = 1.022244
e^0.2x when x= 0.120000 is = 1.024290
e^0.2x when x= 0.130000 is = 1.026341
e^0.2x when x= 0.140000 is = 1.028396
e^0.2x when x= 0.150000 is = 1.030455
e^0.2x when x= 0.160000 is = 1.032518
e^0.2x when x= 0.170000 is = 1.034585
e^0.2x when x= 0.180000 is = 1.036656
e^0.2x when x= 0.190000 is = 1.038731
e^0.2x when x= 0.200000 is = 1.040811
e^0.2x when x= 0.210000 is = 1.042894
e^0.2x when x= 0.220000 is = 1.044982
e^0.2x when x= 0.230000 is = 1.047074
e^0.2x when x= 0.240000 is = 1.049171
e^0.2x when x= 0.250000 is = 1.051271
e^0.2x when x= 0.260000 is = 1.053376
e^0.2x when x= 0.270000 is = 1.055485
e^0.2x when x= 0.280000 is = 1.057598
e^0.2x when x= 0.290000 is = 1.059715
e^0.2x when x= 0.300000 is = 1.061837
e^0.2x when x= 0.310000 is = 1.063962
e^0.2x when x= 0.320000 is = 1.066092
e^0.2x when x= 0.330000 is = 1.068227
e^0.2x when x= 0.340000 is = 1.070365
e^0.2x when x= 0.350000 is = 1.072508
e^0.2x when x= 0.360000 is = 1.074655
e^0.2x when x= 0.370000 is = 1.076807
e^0.2x when x= 0.380000 is = 1.078963
e^0.2x when x= 0.390000 is = 1.081123
e^0.2x when x= 0.400000 is = 1.083287
e^0.2x when x= 0.410000 is = 1.085456
e^0.2x when x= 0.420000 is = 1.087629
e^0.2x when x= 0.430000 is = 1.089806
e^0.2x when x= 0.440000 is = 1.091988
e^0.2x when x= 0.450000 is = 1.094174
e^0.2x when x= 0.460000 is = 1.096365
e^0.2x when x= 0.470000 is = 1.098560
e^0.2x when x= 0.480000 is = 1.100759
e^0.2x when x= 0.490000 is = 1.102963
e^0.2x when x= 0.500000 is = 1.105171
e^0.2x when x= 0.510000 is = 1.107383
e^0.2x when x= 0.520000 is = 1.109600
e^0.2x when x= 0.530000 is = 1.111822
e^0.2x when x= 0.540000 is = 1.114048
e^0.2x when x= 0.550000 is = 1.116278
e^0.2x when x= 0.560000 is = 1.118513
e^0.2x when x= 0.570000 is = 1.120752
e^0.2x when x= 0.580000 is = 1.122996
e^0.2x when x= 0.590000 is = 1.125244
e^0.2x when x= 0.600000 is = 1.127497
e^0.2x when x= 0.610000 is = 1.129754
e^0.2x when x= 0.620000 is = 1.132016
e^0.2x when x= 0.630000 is = 1.134282
e^0.2x when x= 0.640000 is = 1.136553
e^0.2x when x= 0.650000 is = 1.138828
e^0.2x when x= 0.660000 is = 1.141108
e^0.2x when x= 0.670000 is = 1.143393
e^0.2x when x= 0.680000 is = 1.145682
e^0.2x when x= 0.690000 is = 1.147975
e^0.2x when x= 0.700000 is = 1.150274
e^0.2x when x= 0.710000 is = 1.152577
e^0.2x when x= 0.720000 is = 1.154884
e^0.2x when x= 0.730000 is = 1.157196
e^0.2x when x= 0.740000 is = 1.159513
e^0.2x when x= 0.750000 is = 1.161834
e^0.2x when x= 0.760000 is = 1.164160
e^0.2x when x= 0.770000 is = 1.166491
e^0.2x when x= 0.780000 is = 1.168826
e^0.2x when x= 0.790000 is = 1.171166
e^0.2x when x= 0.800000 is = 1.173511
e^0.2x when x= 0.810000 is = 1.175860
e^0.2x when x= 0.820000 is = 1.178214
e^0.2x when x= 0.830000 is = 1.180573
e^0.2x when x= 0.839999 is = 1.182937
e^0.2x when x= 0.849999 is = 1.185305
e^0.2x when x= 0.859999 is = 1.187678
e^0.2x when x= 0.869999 is = 1.190055
e^0.2x when x= 0.879999 is = 1.192438
e^0.2x when x= 0.889999 is = 1.194825
e^0.2x when x= 0.899999 is = 1.197217
e^0.2x when x= 0.909999 is = 1.199614
e^0.2x when x= 0.919999 is = 1.202016
e^0.2x when x= 0.929999 is = 1.204422
e^0.2x when x= 0.939999 is = 1.206833
e^0.2x when x= 0.949999 is = 1.209249
e^0.2x when x= 0.959999 is = 1.211670
e^0.2x when x= 0.969999 is = 1.214096
e^0.2x when x= 0.979999 is = 1.216527
e^0.2x when x= 0.989999 is = 1.218962
e^0.2x when x= 0.999999 is = 1.221403
--------------------------------
Process exited after 0.06925 seconds with return value 0
Press any key to continue . . .
 */
