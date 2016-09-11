int __fastcall sub_80D3490(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = word_3004B00[0];
  *((_WORD *)v1 + 6) = (16 * IndexOfSpritePaletteTag(0x279Cu) & 0xFFF) + 256;
  *v1 = (int)sub_80D34D4;
  return v3;
}
