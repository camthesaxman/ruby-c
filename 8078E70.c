int __fastcall sub_8078E70(unsigned __int8 a1, char a2)
{
  int v2; // r6@1
  char v3; // r8@1
  char *v4; // r4@1
  int v5; // r7@1
  char *v6; // r5@4
  char *v7; // r0@7
  unsigned int v8; // r3@7
  int v10; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = &gSprites[68 * a1];
  v5 = *((_WORD *)v4 + 23) & 0xFF;
  if ( sub_8076BE0() << 24 || b_side_obj__get_some_boolean(v5) << 24 )
    v4[62] &= 0xFBu;
  v6 = &gSprites[68 * v2];
  v6[1] = v6[1] & 0xF3 | 4 * (v3 & 3);
  v6[44] |= 0x80u;
  if ( !(sub_8076BE0() << 24) && !((unsigned __int8)v6[1] << 30) )
    v6[3] = v6[3] & 0xC1 | 2 * (*(_BYTE *)(12 * v5 + 0x2017816) & 0x1F);
  v7 = &gSprites[68 * v2];
  v8 = (unsigned __int8)v7[1] | 3;
  v7[1] = v8;
  CalcCenterToCornerVec((int)v7, v8 >> 6, (unsigned int)(unsigned __int8)v7[3] >> 6, v8 & 3);
  return v10;
}
