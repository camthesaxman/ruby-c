int __fastcall sub_807BE90(int a1)
{
  int *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * *(_WORD *)(a1 + 48)];
  if ( *((_WORD *)v1 + 5) )
  {
    *(_BYTE *)(a1 + 1) &= 0xF3u;
    *(_WORD *)(a1 + 34) = 66;
    *(_BYTE *)(a1 + 62) &= 0xFBu;
  }
  else if ( (signed int)*((_WORD *)v1 + 9) <= 63 )
  {
    *(_BYTE *)(a1 + 62) &= 0xFBu;
    if ( *(_WORD *)(a1 + 34) != 66 )
      ++*(_WORD *)(a1 + 34);
  }
  return v3;
}
