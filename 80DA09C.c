int __fastcall sub_80DA09C(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = word_3004B02;
  *((_WORD *)v1 + 5) = word_3004B00[0];
  *((_WORD *)v1 + 6) = (unsigned __int8)IndexOfSpritePaletteTag(0x2719u);
  *v1 = (int)sub_80DA0DC;
  return v3;
}
