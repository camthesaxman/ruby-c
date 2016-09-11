int __fastcall sub_80467F8(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
  {
    v2 = *(_WORD *)(a1 + 56) + 1;
    *(_WORD *)(v1 + 56) = v2;
    if ( v2 == 1 )
    {
      *(_WORD *)(v1 + 52) = 0;
      *(_WORD *)(v1 + 54) = 32;
      *(_WORD *)(v1 + 56) = 0;
      *(_WORD *)(v1 + 34) += cosine(0, 32);
      *(_WORD *)(v1 + 38) = -(signed __int16)cosine(0, *(_WORD *)(v1 + 54));
      *(_DWORD *)(v1 + 28) = sub_804684C;
    }
  }
  return v4;
}
