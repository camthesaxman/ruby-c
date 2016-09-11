int __fastcall sub_80888D4(int a1)
{
  int v1; // r1@1
  int v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) - 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( !(v2 << 16) )
    *(_DWORD *)(v1 + 28) = sub_80888F0;
  return v4;
}
