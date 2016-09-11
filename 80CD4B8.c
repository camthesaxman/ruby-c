int __fastcall sub_80CD4B8(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_WORD *)(a1 + 56) << 16 >> 24 == 4 )
  {
    *(_WORD *)(a1 + 46) = 10;
    *(_DWORD *)(a1 + 28) = sub_80782D8;
    oamt_set_x3A_32(a1, (int)sub_80CD4EC);
  }
  else
  {
    *(_DWORD *)(a1 + 28) = sub_80CD408;
  }
  return v2;
}
