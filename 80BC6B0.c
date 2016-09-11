int __fastcall sub_80BC6B0(unsigned __int8 a1)
{
  _BYTE *v1; // r8@1
  int v2; // r4@1
  unsigned int v3; // r6@1
  unsigned int v4; // r5@1
  unsigned int i; // r5@8
  int v7; // [sp+14h] [bp-4h]@0

  v1 = &byte_3004B28[40 * a1];
  v2 = 0;
  v3 = 0;
  v4 = 1;
  if ( *((_WORD *)v1 + 2) )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_80BC268(v4) == 1 )
        v2 = (v2 + 1) & 0xFF;
      v4 = (v4 + 1) & 0xFF;
      if ( v4 > 0x13 )
        break;
      if ( v2 == *((_WORD *)v1 + 2) )
      {
        v2 = v4;
        break;
      }
    }
  }
  else
  {
    v2 = 1;
  }
  for ( i = v2; i <= 0x13; i = (i + 1) & 0xFF )
  {
    if ( (unsigned __int8)sub_80BC268(i) == 1 )
    {
      sub_80BC190(&gStringVar1, i);
      MenuFillWindowRectWithBlankTile(0x12u, 2 * v3 + 2, 0x1Cu, 2 * v3 + 3);
      MenuPrint((int)&gStringVar1, 18, 2 * v3 + 2);
      v3 = (v3 + 1) & 0xFF;
      if ( v3 == 8 )
        break;
    }
  }
  if ( v3 > 7 )
  {
    sub_80F953C(1, 188, 152);
  }
  else
  {
    MenuFillWindowRectWithBlankTile(0x12u, 2 * v3 + 2, 0x1Cu, 2 * v3 + 3);
    MenuPrint((int)&UnknownText_Exit, 18, 2 * v3 + 2);
    SetBgTilemapBuffer(1);
    if ( v3 != 7 )
      MenuFillWindowRectWithBlankTile(0x12u, ((v3 << 25) + 0x4000000) >> 24, 0x1Cu, 0x12u);
  }
  if ( *((_WORD *)v1 + 2) )
    sub_80F953C(0, 188, 8);
  else
    SetBgTilemapBuffer(0);
  return v7;
}
