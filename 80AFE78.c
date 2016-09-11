int __fastcall sub_80AFE78(unsigned __int8 a1)
{
  __int16 v1; // r6@1
  int v2; // r7@1
  int v3; // r0@1
  unsigned int v4; // r5@1
  signed int v5; // r0@1
  char *v6; // r4@5
  signed __int16 v7; // r0@6
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(4 * a1 + 0x201933A) |= 1u;
  v2 = *(_BYTE *)(4 * a1 + 0x2019338);
  v3 = *(_WORD *)(28 * a1 + 0x2019264) / 10 << 17;
  v4 = (unsigned int)v3 >> 16;
  v5 = v3 >> 16;
  if ( v5 <= 56 )
  {
    if ( v5 < 0 )
      LOWORD(v4) = 0;
  }
  else
  {
    LOWORD(v4) = 56;
  }
  v6 = &gSprites[68 * v2];
  v6[62] &= 0xFBu;
  *((_WORD *)v6 + 23) = v1;
  *((_WORD *)v6 + 24) = v4;
  if ( (signed __int16)v4 <= (signed int)*((_WORD *)v6 + 18) )
    v7 = -1;
  else
    v7 = 1;
  *((_WORD *)v6 + 25) = v7;
  dword_2020020[17 * v2] = (int)sub_80AFF60;
  return v9;
}
