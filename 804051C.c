int __fastcall sub_804051C(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  signed int v4; // r4@1
  _WORD *v5; // r3@2
  int v6; // r1@3

  v2 = a2;
  v3 = 0;
  v4 = 0;
  if ( **(_WORD **)((char *)gLevelUpLearnsets + (4 * a1 & 0x3FFFF)) != 0xFFFF )
  {
    v5 = *(void ***)((char *)gLevelUpLearnsets + (4 * a1 & 0x3FFFF));
    do
    {
      v6 = v3;
      v3 = (v3 + 1) & 0xFF;
      *(_WORD *)(2 * v6 + v2) = *v5 & 0x1FF;
      ++v5;
      ++v4;
    }
    while ( v4 <= 19 && *v5 != 0xFFFF );
  }
  return v3;
}
