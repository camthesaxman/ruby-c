int __fastcall sub_80F2218(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 32) - 8;
  *(_WORD *)(v1 + 32) = v2;
  if ( v2 <= (signed int)*(_WORD *)(v1 + 50) )
  {
    *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 50);
    *(_DWORD *)(v1 + 28) = sub_80F22B0;
  }
  return v4;
}
