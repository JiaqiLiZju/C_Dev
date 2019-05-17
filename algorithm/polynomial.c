#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int CoeffArray[MaxDegree+1];
	int HighPower; 
} *Polynomial;
void ZeroPolynomial(Polynomial Poly){
	int i;
	for(i=0;i<=MaxDegree;i++){
		Poly->CoeffArray[i]=0;
	}
	Poly->HighPower=0;
}
void AddPolynomial(const Polynomial Poly1, const Polynomial Poly2, Polynomial PolySum){
	int i;
	ZeroPolynomial PolySum;
	Poly1->HighPower > Poly2->HighPower ? PolySum->HighPower=Poly1->HighPower : PolySum->HighPower=Poly2->HighPower;
	for(i=PolySum->HighPower;i>=0;i--){
		PolySum->CoeffArray[i] = Poly1->CoeffArray[i] + Poly2->CoeffArray[i];
	}
}
