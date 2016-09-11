int __fastcall sub_8116474(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v3; // r0@1
  signed __int16 v4; // r0@7
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5);
  *((_WORD *)v2 + 5) = v3 - 1;
  if ( v3 << 16 <= 0 )
  {
    sub_8117D68(*((_WORD *)v2 + 16) & 0xFF);
    if ( *((_WORD *)v2 + 9) == 1 )
      v4 = 121;
    else
      v4 = 61;
    *((_WORD *)v2 + 5) = v4;
    dword_3004B20[10 * v1] = (int)sub_8116514;
  }
  else
  {
    if ( (signed __int16)(v3 - 1) > 2 )
      gSpriteCoordOffsetX -= 2;
    v2019026 -= 4;
    if ( v2019026 == 104 )
      dword_2020020[17 * v2019055] = (int)sub_81184CC;
  }
  return v6;
}
