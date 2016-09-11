int sub_80AEF50()
{
  int v0; // r5@1
  int v1; // r8@2
  __int16 v2; // r6@2
  int v3; // r4@2
  int v4; // r2@2
  _WORD *v5; // r0@6
  int v7; // [sp+18h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = (5 * *(_BYTE *)(v0 + 33785494) + 2) & 0xFF;
    v2 = sub_80AEE4C();
    v3 = 0;
    v4 = v0 + 1;
    while ( v3 < *(_BYTE *)(28 * v0 + 0x201926D) / 10 )
      *(_WORD *)(((v1 + v3++) << 6) + 0x600C026) = v2;
    if ( v3 <= 2 )
    {
      v5 = (_WORD *)((v3 << 6) + 100712486 + (v1 << 6));
      do
      {
        *v5 = 0;
        v5 += 32;
        ++v3;
      }
      while ( v3 <= 2 );
    }
    ++v0;
  }
  while ( v4 <= 3 );
  return v7;
}
