int __fastcall FieldEffectScript_LoadPalette(int a1)
{
  _DWORD *v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = (_DWORD *)a1;
  v2 = FieldEffectScript_ReadWord(a1);
  LoadSpritePalette(v2);
  *v1 += 4;
  return v4;
}
