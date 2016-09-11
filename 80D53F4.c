int __fastcall sub_80D53F4(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_BYTE *)(a1 + 62) &= 0xFBu;
  *(_WORD *)(a1 + 46) = *(_WORD *)(a1 + 48);
  *(_WORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 28) = sub_80D541C;
  call_via_r1(a1, sub_80D541C);
  return v2;
}
