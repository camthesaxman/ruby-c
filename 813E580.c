int __fastcall sub_813E580(int a1, int a2)
{
  unsigned int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  char *v5; // r2@2
  int v7; // [sp+10h] [bp-4h]@0

  v2 = 0;
  v3 = a1 << 16;
  v4 = a2 << 16;
  do
  {
    v5 = &gSprites[68 * (unsigned __int8)CreateSprite((int)"Ó\aÓ\aœ°@\b¬°@\b", SHIWORD(v3), SHIWORD(v4))];
    v5[1] = v5[1] & 0xFC | 1;
    v5[3] = v5[3] & 0xC1 | 0x20;
    *((_WORD *)v5 + 23) = v2;
    *((_WORD *)v5 + 24) = 32;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 7 );
  return v7;
}
