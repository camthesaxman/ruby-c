int __fastcall sub_80F9914(unsigned __int8 a1)
{
  unsigned int v1; // r1@1
  _BYTE *v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (_BYTE *)(a1 + 33786048);
  v3 = *(_BYTE *)(a1 + 0x20388C0);
  if ( v3 != 255 && v1 <= 3 )
  {
    *(_WORD *)&gSprites[68 * v3 + 36] = 0;
    *(_WORD *)&gSprites[68 * *v2 + 38] = 0;
    *(_WORD *)&gSprites[68 * *v2 + 48] = 0;
    *(_WORD *)&gSprites[68 * *v2 + 52] = 0;
  }
  return v5;
}
