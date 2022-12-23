//
// Created by Selim talha Aksoy on 12/23/22.
//

#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

int main( void )
{
	Base* bp = generate();

	identify( bp );
	identify( *bp );

	delete bp;

	return 0;
}