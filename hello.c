#include <stdio.h>

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

int main( int argc, char ** argv )
{
#ifdef CONFIG_REPEAT
   int i;
   for( i = 0; i < 10; i++ )
#endif
      puts( "Hallo World xxx!" );

   return 0;
}
