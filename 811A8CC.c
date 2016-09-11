int __fastcall sub_811A8CC(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v6; // r0@6

  v3 = a3;
  v4 = sub_811A920(a1, a2);
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    v6 = *(_WORD *)(*(_DWORD *)v4 + 4);
    if ( v6 != 0xFFFF && (unsigned __int8)FlagGet(v6) != 1 )
      goto _0811A8F6;
    if ( !v3 )
      return **(_DWORD **)v4;
    v3 = (v3 - 1) & 0xFF;
_0811A8F6:
    v4 += 4;
    if ( !*(_DWORD *)v4 )
      return 0;
  }
}
