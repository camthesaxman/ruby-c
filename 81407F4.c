int __fastcall sub_81407F4(int a1)
{
  int v1; // r2@1
  int v2; // r3@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = *(_WORD *)(a1 + 46) + 2048;
  v2 = *(_WORD *)(a1 + 48) + 1664;
  *(_WORD *)(a1 + 36) -= v2 << 16 >> 24;
  *(_WORD *)(a1 + 38) += v1 << 16 >> 24;
  *(_WORD *)(a1 + 46) = (unsigned __int8)v1;
  *(_WORD *)(a1 + 48) = (unsigned __int8)v2;
  if ( *(_WORD *)(a1 + 34) + (signed int)*(_WORD *)(a1 + 38) > 160
    || *(_WORD *)(a1 + 32) + (signed int)*(_WORD *)(a1 + 36) < -8 )
  {
    *(_WORD *)(a1 + 46) = 0;
    *(_DWORD *)(a1 + 28) = sub_81405C8;
    v2024E6D = 0;
    sub_8043EB4(1);
  }
  return v4;
}
