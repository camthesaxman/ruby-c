int __fastcall sub_800FE20(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  StartSpriteAffineAnim(a1, 1);
  *(_DWORD *)(v1 + 28) = sub_800FDB0;
  audio_play(104);
  return v3;
}
