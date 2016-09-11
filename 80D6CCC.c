int __fastcall sub_80D6CCC(int a1)
{
  int v1; // r4@1
  int *v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078B5C(a1) << 24 )
  {
    v2 = &dword_3004B20[10 * *(_WORD *)(v1 + 56)];
    --*((_WORD *)v2 + 11);
    DestroySprite(v1);
  }
  return v4;
}
