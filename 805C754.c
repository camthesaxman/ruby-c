int __fastcall sub_805C754(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = sub_805C700(a1);
  if ( v2 )
  {
    *(_WORD *)(v2 + 4) = *(_WORD *)(v1 + 16) - 7;
    *(_WORD *)(v2 + 6) = *(_WORD *)(v1 + 18) - 7;
  }
  return v4;
}
