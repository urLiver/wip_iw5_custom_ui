#ifndef UTILS_PROPERTIES__
    #define UTILS_PROPERTIES__              1

    #define Rect( x_, y_, w_, h_ ) \          
        rect ( x_ ) ( y_ ) ( w_ ) ( h_ )  0 0
  
    #define FullRect( x_, y_, w_, h_, s0_, s1_ ) \
        rect ( x_ ) ( y_ ) ( w_ ) ( h_ ) s0_ s1_

    #define Text( font_, font_size_, alignment_ ) \
        textfont font_ \
        textscale font_size_ \
        textalign alignment_

    #define WrappedText( font_, font_size_, alignment_ ) \
        textfont font_ \
        textscale font_size_ \
        textalign alignment_ \
        autowrapped

    #define AdvancedText( font_, font_size_, alignment_, style_ ) \
        textfont font_ \
        textscale font_size_ \
        textalign alignment_ \
        textstyle style_

    #define Material( material_ ) \
        background material_ 

    #define Ownerdraw( ownerdraw_ ) \
        ownerdraw ownerdraw_ 

    #define Show() \
        visible 1

    #define Hide() \
        visible 0

    #define Forecolor( r_, g_, b_, a_ ) \
        forecolor r_ g_ b_ a_ 

    #define Backcolor( r_, g_, b_, a_ ) \
        backcolor r_ g_ b_ a_ 

    #define PresetForecolor( color_ ) \
        forecolor color_

    #define PresetBackcolor( color_ ) \
        backcolor color_ 

    #define Useable( type_ ) \
        style 1 \
        type type_

    #define NotUseable() \
        style 1 \
        decoration
    
#endif