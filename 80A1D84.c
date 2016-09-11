int __fastcall sub_80A1D84(int a1)
{
  int v1; // r5@1
  int v2; // r2@1
  int v3; // r4@1
  char v4; // r0@2
  int v5; // r1@2
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v3 = sub_80F7920(30003);
  v20384F4 = v3;
  if ( v3 )
  {
    v4 = GetMonData(v1, 8, v2);
    StartSpriteAnim(v3, v4);
    v5 = v20384F4;
    *(_WORD *)(v20384F4 + 32) = 60;
    *(_WORD *)(v5 + 34) = 26;
  }
  return v7;
}
