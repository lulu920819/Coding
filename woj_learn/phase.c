#include<math.h>
#include<stdio.h>

static void DeMidFreqPhase(float *l_real,float *l_imag,float *r_real,float *r_imag)
{
	float l_phase,r_phase,l_dif,r_dif;
	float l_amplitude,r_amplitude;
	l_phase =(float) atan2(*l_imag, *l_real);
	r_phase = (float)atan2(*r_imag, *r_real);

	//fscanf(fp,"%f %f",&l_dif,&r_dif);

    r_dif = (l_phase-r_phase);
    l_dif = (r_phase-l_phase);
    printf("%f %f \n",l_phase,r_phase);

	l_amplitude = (*l_real)*(*l_real)+(*l_imag)*(*l_imag);
	l_amplitude = (float)sqrt(l_amplitude);

	r_amplitude = (*r_real)*(*r_real)+(*r_imag)*(*r_imag);
	r_amplitude = (float)sqrt(r_amplitude);

    printf("%f %f \n",l_amplitude,r_amplitude);
	(*l_real) = (float)cos(l_phase+l_dif)*(l_amplitude);
	(*r_real) = (float)cos(r_phase+l_dif)*(l_amplitude);
	(*l_imag) = (float)sin(l_phase+l_dif)*(r_amplitude);
	(*r_imag) = (float)sin(r_phase+l_dif)*(r_amplitude);
}

int main()
{
    float lr = 0.0;
    float li = -4.0;
    float rr = sqrt(8);
    float ri = sqrt(8);
    printf("---%f %f %f %f\n",lr,li,rr,ri);
    DeMidFreqPhase(&lr,&li,&rr,&ri);

    printf("---%f %f %f %f\n",lr,li,rr,ri);
}
