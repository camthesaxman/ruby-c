int __fastcall sub_812F290(unsigned __int8 a1)
{
  int *v1; // r5@1
  int v2; // r2@1
  char *v3; // r6@1
  __int16 v4; // r0@1
  int v6; // [sp+10h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_BYTE *)v1 + 8);
  *((_WORD *)v1 + 14) -= 16;
  *((_WORD *)v1 + 15) += 128;
  v3 = &gSprites[68 * v2];
  v3[1] = v3[1] & 0xFC | v3[1] & 3 | 2;
  sub_8078FDC((int)v3, 1, *((_WORD *)v1 + 14), *((_WORD *)v1 + 15), 0);
  v4 = *((_WORD *)v1 + 16) + 1;
  *((_WORD *)v1 + 16) = v4;
  if ( v4 == 9 )
  {
    sub_8079098((int)v3);
    sub_807A0F4((int)v3);
    *v1 = (int)sub_8078634;
  }
  return v6;
}
