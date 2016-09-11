int ContestEffect_14()
{
  unsigned int v0; // r0@1
  signed __int16 v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = (unsigned __int16)Random() % 0xAu & 0xFF;
  v1 = 20;
  if ( v0 > 1 )
  {
    v1 = 60;
    if ( v0 <= 7 )
      v1 = 40;
  }
  v20192D4 = v1;
  ContestEffect_08();
  return v3;
}
