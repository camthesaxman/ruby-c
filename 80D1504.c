int __fastcall sub_80D1504(int a1)
{
  int v1; // r4@1
  signed __int16 v2; // r0@1
  __int16 v3; // r1@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  *(_WORD *)(v1 + 48) = v2 + 1;
  if ( !(v2 % 3 << 16) )
  {
    v3 = *(_WORD *)(v1 + 46) - 1;
    *(_WORD *)(v1 + 46) = v3;
    v4000052 = v3 | ((16 - v3) << 8);
    if ( !*(_WORD *)(v1 + 46) )
      *(_DWORD *)(v1 + 28) = sub_80D154C;
  }
  return v5;
}
