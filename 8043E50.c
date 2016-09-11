int __fastcall sub_8043E50(unsigned __int8 a1, __int16 a2, __int16 a3)
{
  char *v3; // r3@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = &gSprites[68 * a1];
  *((_WORD *)v3 + 16) = a2;
  *((_WORD *)v3 + 17) = a3;
  return v5;
}
