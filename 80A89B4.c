int __fastcall sub_80A89B4(unsigned __int8 a1)
{
  int *v1; // r5@1
  int v2; // r1@1
  int v3; // r0@1
  char *v4; // r4@1
  int v5; // r0@1
  int v7; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_BYTE *)v1 + 8);
  v3 = *((_WORD *)v1 + 5) + *((_WORD *)v1 + 15);
  *((_WORD *)v1 + 15) = v3;
  v4 = &gSprites[68 * v2];
  *((_WORD *)v4 + 18) = v3 << 16 >> 24;
  *((_WORD *)v4 + 19) = sine((unsigned int)*((_WORD *)v1 + 14) >> 8, *((_WORD *)v1 + 6));
  *((_WORD *)v1 + 14) += *((_WORD *)v1 + 11);
  v5 = *((_WORD *)v1 + 7) - 1;
  *((_WORD *)v1 + 7) = v5;
  if ( !(v5 << 16) )
    *v1 = (int)sub_80A8A18;
  return v7;
}
