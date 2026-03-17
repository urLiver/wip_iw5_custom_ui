#ifndef UTILS_ANIMATIONS__
    #define UTILS_ANIMATIONS__              1

    #define iGetAnim( anim_name_, milli_seconds_ ) \
        select ( ( localvarint( anim_name_ ) > 0 ) , \
            max( min( ( milliseconds( ) - localvarint( anim_name_ ) ) / milli_seconds_ , 1 ) , 0 ), \
            max( min( 1 - ( milliseconds( ) + localvarint( anim_name_ ) ) / milli_seconds_ , 1 ) , 0 ) \
        )

    #define iAnimFadeIn( anim_name_ ) \
        setLocalVarInt anim_name_ ( ( 1 ) * milliseconds( ) );

    #define iAnimFadeOut( anim_name_ ) \
        setLocalVarInt anim_name_ ( ( -1 ) * milliseconds( ) );

    #define iSetupAnims( anim_name_ ) \
        onFocus \
        { \
            iAnimFadeIn( anim_name_ ); \
            play "mouse_over"; \
        } \
        leaveFocus \
        { \
            iAnimFadeOut( anim_name_ ); \
        }

    #define fGetAnim( anim_name_, milli_seconds_ ) \
        select ( ( localvarfloat( anim_name_ ) > 0 ) , \
            max( min( ( milliseconds( ) - localvarfloat( anim_name_ ) ) / milli_seconds_ , 1 ) , 0 ), \
            max( min( 1 - ( milliseconds( ) + localvarfloat( anim_name_ ) ) / milli_seconds_ , 1 ) , 0 ) \
        )

    #define fAnimFadeIn( anim_name_ ) \
        setLocalVarFloat anim_name_ ( ( 1 ) * milliseconds( ) );

    #define fAnimFadeOut( anim_name_ ) \
        setLocalVarFloat anim_name_ ( ( -1 ) * milliseconds( ) );

    #define fSetupAnims( anim_name_ ) \
        onFocus \
        { \
            fAnimFadeIn( anim_name_ ); \
            play "mouse_over"; \
        } \
        leaveFocus \
        { \
            fAnimFadeOut( anim_name_ ); \
        }

#endif