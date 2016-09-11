int __fastcall FieldEffectScript_LoadFadedPalette(int a1)
{
  _DWORD *v1; // r5@1
  int v2; // r4@1
  unsigned __int8 v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = (_DWORD *)a1;
  v2 = FieldEffectScript_ReadWord(a1);
  LoadSpritePalette(v2);
  v3 = IndexOfSpritePaletteTag(*(_WORD *)(v2 + 4));
  sub_807D78C(v3);
  *v1 += 4;
  return v5;
}
