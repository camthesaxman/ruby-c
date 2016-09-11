signed int __fastcall sub_80F1BC8(unsigned __int8 a1)
{
  int v1; // r9@1
  char v2; // r0@15
  int v3; // r8@18
  int *v4; // r1@18
  int v5; // r4@19
  _BYTE *v6; // r1@20
  unsigned int v7; // r5@21
  unsigned int v8; // r5@25
  int v9; // r3@26
  char *v10; // r0@27
  char v11; // r1@27
  int v13; // [sp+0h] [bp-2Ch]@18
  signed __int16 v14; // [sp+4h] [bp-28h]@15
  signed __int16 v15; // [sp+8h] [bp-24h]@15

  v1 = a1;
  if ( v2000306 == 1 )
  {
    sub_80F2514(a1);
  }
  else if ( (signed int)v2000306 > 1 )
  {
    if ( v2000306 != 2 )
      return 0;
    if ( a1 == 1 )
    {
      v14 = 56;
      v15 = 20;
      v2 = 3;
    }
    else if ( (signed int)a1 > 1 )
    {
      if ( a1 != 2 )
        return 0;
      v14 = 40;
      v15 = 16;
      v2 = 6;
    }
    else
    {
      if ( a1 )
        return 0;
      v14 = 42;
      v15 = 20;
      v2 = 5;
    }
    v200030E = v2;
    v13 = 0;
    v3 = 0;
    v4 = &gUnknown_083DFEC4;
    if ( v2 > 0 )
    {
      while ( 1 )
      {
        v5 = *v4;
        *(_WORD *)(*v4 + 788 + 2 * v3) = ((v14 + (_WORD)v3 * v15 - 8) << 8) | (v14 + v3 * v15 + 9);
        if ( v1 )
          break;
        v6 = (_BYTE *)(v5 + 28082 + v3);
        if ( *v6 )
        {
          v13 = 4 * (*v6 - 1) & 0xFFFF;
          break;
        }
        v7 = 0;
        do
        {
          *(_DWORD *)(4 * v7 + 16 * v3 + 0x2000320) = 0;
          v7 = (v7 + 1) & 0xFFFF;
        }
        while ( v7 <= 3 );
_080F1D92:
        v3 = (v3 + 1) & 0xFFFF;
        v4 = &gUnknown_083DFEC4;
        if ( v3 >= v200030E )
          goto _080F1DC8;
      }
      v8 = 0;
      while ( 1 )
      {
        v9 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83E4454, 32 * v8 + 256, v14 + v3 * v15);
        if ( v9 == 64 )
          return 0;
        v10 = &gSprites[68 * v9];
        *(_DWORD *)(4 * v8 + 16 * v3 + 0x2000320) = v10;
        *((_WORD *)v10 + 23) = v3;
        *(_WORD *)(*(_DWORD *)(4 * v8 + 16 * v3 + 0x2000320) + 48) = v8;
        *(_WORD *)(*(_DWORD *)(4 * v8 + 16 * v3 + 0x2000320) + 50) = 32 * v8 + 152;
        *(_WORD *)(*(_DWORD *)(4 * v8 + 16 * v3 + 0x2000320) + 52) = 32 * v8 + 256;
        v11 = v13;
        v13 = (v13 + 1) & 0xFFFF;
        StartSpriteAnim(*(_DWORD *)(4 * v8 + 16 * v3 + 0x2000320), v11);
        if ( (v1 == 2 || !v1) && (unsigned int)v3 > 2 )
          *(_BYTE *)(*(_DWORD *)(4 * v8 + 16 * v3 + 0x2000320) + 5) = *(_BYTE *)(*(_DWORD *)(4 * v8 + 16 * v3 + 0x2000320)
                                                                               + 5) & 0xF | 16
                                                                                          * IndexOfSpritePaletteTag(1u);
        v8 = (v8 + 1) & 0xFFFF;
        if ( v8 > 3 )
          goto _080F1D92;
      }
    }
  }
  else
  {
    if ( v2000306 )
      return 0;
    sub_80F2458(a1);
  }
_080F1DC8:
  ++v2000306;
  return 1;
}
