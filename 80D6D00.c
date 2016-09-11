int __fastcall sub_80D6D00(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  StartSpriteAnim(a1, 1);
  *(_DWORD *)(v1 + 28) = sub_80D6CCC;
  return v3;
}
