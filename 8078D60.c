int __fastcall sub_8078D60(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50) - *(_WORD *)(a1 + 48);
  if ( v2 < 0 )
    v2 = -v2;
  *(_WORD *)(v1 + 46) = 16 * v2 / *(_WORD *)(v1 + 46);
  sub_8078C28(v1);
  return v4;
}
