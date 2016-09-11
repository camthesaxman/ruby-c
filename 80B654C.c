int __fastcall sub_80B654C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+0h] [bp-20h]@1
  __int16 v4; // [sp+8h] [bp-18h]@1
  __int16 v5; // [sp+Ah] [bp-16h]@1
  __int16 v6; // [sp+Ch] [bp-14h]@1

  v1 = a1;
  v4 = (16 * IndexOfSpritePaletteTag(4u) & 0xFFF) + 270;
  v5 = (16 * IndexOfSpritePaletteTag(6u) & 0xFFF) + 268;
  v6 = (16 * IndexOfSpritePaletteTag(6u) & 0xFFF) + 270;
  memcpy(&v3, &v4, 6);
  return *((_WORD *)&v3 + v1);
}
