int __fastcall unref_sub_80785CC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  ResetPaletteStructByUid(*(_WORD *)(a1 + 56));
  move_anim_8074EE0(v1);
  return v3;
}
