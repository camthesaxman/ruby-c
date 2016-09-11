int __fastcall sub_8115ECC(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 5);
  *((_WORD *)v1 + 5) = v2 - 1;
  if ( v2 << 16 <= 0 )
  {
    sub_8117AA8(1, 255);
    sub_8117C60(1, 255);
    *v1 = (int)sub_8116100;
    *((_WORD *)v1 + 5) = 0;
  }
  else
  {
    if ( (signed __int16)(v2 - 1) > 2 )
      gSpriteCoordOffsetX += 2;
    v2019026 += 4;
    if ( v2019026 == 104 )
      dword_2020020[17 * v2019055] = (int)SpriteCallbackDummy;
  }
  return v4;
}
