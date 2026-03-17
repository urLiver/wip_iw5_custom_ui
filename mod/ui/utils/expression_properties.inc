#ifndef UTILS_EXPRESSION_PROPERTIES__
    #define UTILS_EXPRESSION_PROPERTIES__   1

    #define ExpMaterial( material_ ) \
        exp material material_

    #define ExpText( text_ ) \
        exp text ( text_ )

    #define ExpIsVisible( visible_when_ ) \
        visible when ( visible_when_ )

    #define ExpForecolorR( r_ ) \  
        exp forecolor r ( r_ )

    #define ExpForecolorG( g_ ) \  
        exp forecolor g ( g_ )

    #define ExpForecolorB( b_ ) \  
        exp forecolor b ( b_ )

    #define ExpForecolorA( a_ ) \  
        exp forecolor a ( a_ )

    #define ExpBackcolorR( r_ ) \  
        exp backcolor r ( r_ )

    #define ExpBackcolorG( g_ ) \  
        exp backcolor g ( g_ )

    #define ExpBackcolorB( b_ ) \  
        exp backcolor b ( b_ )

    #define ExpBackcolorA( a_ ) \  
        exp backcolor a ( a_ )

    #define ExpRectX( x_ ) \  
        exp rect x ( x_ )

    #define ExpRectY( y_ ) \  
        exp rect y ( y_ )

    #define ExpRectW( w_ ) \  
        exp rect w ( w_ )

    #define ExpRectH( h_ ) \  
        exp rect h ( h_ )

#endif