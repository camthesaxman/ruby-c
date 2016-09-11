int atk15_seteffectwithchancetarget()
{
  unsigned int v0; // r4@2
  int v1; // r0@4
  int v3; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA0) == 32 )
    v0 = 2 * gBattleMoves[12 * v2024BE6 + 5];
  else
    v0 = gBattleMoves[12 * v2024BE6 + 5];
  v1 = v2024D21 & 0x80;
  if ( !(v2024D21 & 0x80) || (v1 = v2024C68 & 0x29) != 0 )
  {
    if ( ((unsigned __int16)Random(v1) % 0x64u & 0xFFFF) > v0 || !v2024D21 || v2024C68 & 0x29 )
    {
      ++v2024C10;
      goto _0801F6E2;
    }
    if ( v0 <= 0x63 )
    {
      sub_801E3EC(0, 0);
      goto _0801F6E2;
    }
  }
  else
  {
    v2024D21 &= 0x7Fu;
  }
  sub_801E3EC(0, 0x80u);
_0801F6E2:
  v2024D21 = 0;
  v2016112 = 0;
  return v3;
}
