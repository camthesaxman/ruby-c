_BYTE *__fastcall sub_80EB3FC(_BYTE *a1, int a2)
{
  _BYTE *v2; // r5@1
  unsigned int v3; // r6@1
  int v4; // r4@1
  __int16 v5; // r7@1
  signed int v7; // r1@4
  int v8; // r2@4
  char *v9; // r1@9
  int v10; // r2@11
  int v11; // r0@12
  int v12; // r0@13

  v2 = a1;
  v3 = a2 << 16;
  v4 = (unsigned __int16)a2;
  v5 = a2;
  if ( sub_80EB37C((unsigned __int16)a2) << 24 )
    return StringCopy(v2, &OtherText_ThreeQuestions);
  if ( v4 != 0xFFFF )
  {
    v7 = v3 >> 25;
    v8 = v5 & 0x1FF;
    if ( (signed int)(v3 >> 25) > 19 )
    {
      if ( v7 != 21 )
        goto _080EB468;
    }
    else
    {
      if ( v7 >= 18 )
      {
        v9 = &gMoveNames[13 * v8];
        goto _080EB498;
      }
      if ( v7 )
      {
_080EB468:
        v9 = (char *)gEasyChatGroupWords[v7];
        v10 = (v8 - 1) & 0xFFFF;
        if ( v10 != 0xFFFF )
        {
          do
          {
            v11 = (unsigned __int8)*v9++;
            LOWORD(v10) = v10 - 1;
            if ( v11 != 255 )
            {
              do
                v12 = (unsigned __int8)*v9++;
              while ( v12 != 255 );
            }
          }
          while ( (unsigned __int16)v10 != 0xFFFF );
        }
        goto _080EB498;
      }
    }
    v9 = &gSpeciesNames[11 * v8];
_080EB498:
    v2 = StringCopy(v2, v9);
  }
  *v2 = -1;
  return v2;
}
