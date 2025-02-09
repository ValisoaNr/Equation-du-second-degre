#include<stdio.h>
#include<math.h>

float main ()
{
	float a , b , c , delta , x , x1 , x2 ,  re , img ;
	
	printf("soit a x^2 + b x + c = 0 \n\n"); //presentation du programme
	
	printf("Entrez la valeur de a :");
	scanf("%f",&a);
	printf("Entrez la valeur de b :");
	scanf("%f",&b);
	printf("Entrez la valeur de c :");
	scanf("%f",&c);
	
	if ( (a==0) && (b!=0) )
	{
		x = ( -c/b ) ;
		printf("Alors ;\n x = %f\n",x) ;
	}
		
			else
			{
				delta = ( (b * b) - ( 4 * a * c) ) ;//calcule du discriminant DELTA
				
				if( delta == 0 )
				{
					x = ( -b / (2*a) ) ;
					printf("Alors ;\n x = %f\n",x) ;
				}
				
					else if ( delta > 0 )
					{
						x1 = ( -b + sqrt( delta ) ) / ( 2 * a ) ;
						x2 = ( -b - sqrt( delta ) ) / ( 2 * a ) ;
						printf("Alors ;\n x1 = %f\n", x1 );
						printf("et x2 = %f\n", x2);
					}
					
						else
						{
							re = ( -b )/(2*a) ; //partie reelle
							img = ( sqrt( -delta ) ) / ( 2 * a ) ; //partie imaginaire
							
							//affichage des resultats par partie 
							printf("Alors ;\n x1 = %f + %fi\n ", re , img ) ; 
							printf("et x2 = %f - %fi\n", re , img );
						}
						
			}

	return (0);

}
