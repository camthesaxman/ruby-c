int __fastcall sub_80634A0(int a1, int a2)
{
  char v2; // r3@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = *(_BYTE *)(a1 + 1);
  if ( *(_BYTE *)(a1 + 1) & 8 )
  {
    *(_BYTE *)(a2 + 44) &= 0xBFu;
    *(_BYTE *)(a1 + 1) = v2 & 0xF3;
  }
  return v4;
}
