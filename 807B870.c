int __fastcall sub_807B870(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_WORD *)(a1 + 58) )
  {
    --*(_WORD *)(a1 + 58);
  }
  else
  {
    *(_BYTE *)(a1 + 62) &= 0xFBu;
    *(_DWORD *)(a1 + 28) = sub_807B8A4;
    call_via_r1(a1, sub_807B8A4);
  }
  return v2;
}
