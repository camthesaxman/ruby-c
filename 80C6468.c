int __fastcall sub_80C6468(int a1)
{
  __int16 v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = *(_WORD *)(a1 + 46);
  if ( (signed int)*(_WORD *)(a1 + 46) > 39 )
  {
    *(_WORD *)(a1 + 46) = 0;
    *(_DWORD *)(a1 + 28) = sub_80C6498;
  }
  else
  {
    *(_WORD *)(a1 + 46) = v1 + 1;
    if ( (signed __int16)(v1 + 1) == 20 )
      sub_80BB800();
  }
  return v3;
}
