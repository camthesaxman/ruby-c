int sub_8096BF0()
{
  unsigned __int8 v0; // r1@7
  int v2; // [sp+4h] [bp-4h]@0

  if ( v2000004 == 1 )
  {
    audio_play(2u);
    v200000C = 14;
    v200000E = -9520;
    v2000010 = 0;
    v2000012 = 0;
    sub_80C5CD4(33554444);
    v0 = 0;
_08096C38:
    BlendPalettes(0xFFFFFFFF, v0, 0);
    ++v2000004;
    return v2;
  }
  if ( (signed int)v2000004 <= 1 )
  {
    if ( v2000004 )
      return v2;
    v0 = 16;
    goto _08096C38;
  }
  if ( v2000004 == 2 && sub_80C5DCC() << 24 )
    sub_8096BE0((int)sub_8096C84);
  return v2;
}
