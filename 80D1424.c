int __fastcall sub_80D1424(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  *(_WORD *)(v1 + 46) = v2 + 1;
  if ( v2 > 19 )
  {
    StartSpriteAffineAnim(v1, 2);
    *(_DWORD *)(v1 + 28) = sub_80D144C;
  }
  return v4;
}
