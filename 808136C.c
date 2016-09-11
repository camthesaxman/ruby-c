int __fastcall sub_808136C(int a1, unsigned int a2, signed int a3, signed int a4)
{
  int v5; // [sp+0h] [bp-4h]@0

  if ( a2 <= 0xA0 )
  {
    if ( a3 < 0 )
      a3 = 0;
    if ( a3 > 255 )
      LOWORD(a3) = 255;
    if ( a4 < 0 )
      a4 = 0;
    if ( a4 > 255 )
      LOWORD(a4) = 255;
    *(_WORD *)(2 * a2 + a1) = ((_WORD)a3 << 8) | a4;
  }
  return v5;
}
