int __fastcall sub_8127F28(unsigned __int8 a1, int a2, __int16 a3)
{
  char *v3; // r3@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = &gSprites[68 * a1];
  *((_WORD *)v3 + 23) = *((_WORD *)v3 + 23) & 0xF0FF | (((a2 << 24) & 0xF000000u) >> 16);
  *((_WORD *)v3 + 24) = a3;
  return v5;
}
