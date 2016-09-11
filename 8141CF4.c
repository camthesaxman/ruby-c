int __fastcall sub_8141CF4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078718(a1) << 24 )
  {
    *(_WORD *)(v1 + 46) = 0;
    *(_BYTE *)(v1 + 62) |= 4u;
    *(_DWORD *)(v1 + 28) = sub_8141D20;
  }
  return v3;
}
