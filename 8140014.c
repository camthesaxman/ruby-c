int __fastcall sub_8140014(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
  {
    *(_WORD *)(a1 + 52) = 0;
    *(_WORD *)(a1 + 54) = 32;
    *(_WORD *)(a1 + 56) = 0;
    *(_WORD *)(a1 + 34) += cosine(0, 32);
    *(_WORD *)(v1 + 38) = -(signed __int16)cosine(0, *(_WORD *)(v1 + 54));
    *(_DWORD *)(v1 + 28) = sub_8140058;
  }
  return v3;
}
