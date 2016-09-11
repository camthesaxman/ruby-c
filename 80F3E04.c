int __fastcall sub_80F3E04(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 63) & 0x10 )
  {
    *(_WORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 28) = sub_80F3DDC;
  }
  return v2;
}
