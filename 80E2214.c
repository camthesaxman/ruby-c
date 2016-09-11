int __fastcall sub_80E2214(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v3; // r2@6
  int *v4; // r1@9
  __int16 v5; // r0@9
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 4) <= 0 )
  {
    if ( !(v202F38F & 0x80) )
    {
      if ( *((_WORD *)v2 + 6) )
      {
        v3 = 1 << (IndexOfSpritePaletteTag(*((_WORD *)v2 + 11)) + 16);
        if ( *((_WORD *)v2 + 5) & 0x100 )
          BeginNormalPaletteFade(v3, 0, *((_BYTE *)v2 + 16), *((_BYTE *)v2 + 16), *((_WORD *)v2 + 7));
        else
          BeginNormalPaletteFade(v3, 0, *((_BYTE *)v2 + 20), *((_BYTE *)v2 + 20), *((_WORD *)v2 + 9));
        v4 = &dword_3004B20[10 * v1];
        v5 = *((_WORD *)v4 + 5) ^ 0x100;
        *((_WORD *)v4 + 5) = v5;
        *((_WORD *)v4 + 4) = (unsigned __int8)v5;
        --*((_WORD *)v4 + 6);
      }
      else
      {
        *v2 = (int)sub_80E22CC;
      }
    }
  }
  else
  {
    --*((_WORD *)v2 + 4);
  }
  return v7;
}
