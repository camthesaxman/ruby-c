int __fastcall obj_npc_ministep(int a1)
{
  int v1; // r4@1
  int v2; // r2@1
  __int16 v3; // r0@2
  int result; // r0@3

  v1 = a1;
  v2 = *(_WORD *)(a1 + 54);
  result = 0;
  if ( *(_WORD *)(a1 + 56) < (signed int)gUnknown_08376194[v2] )
  {
    call_via_r2(a1, *(_WORD *)(a1 + 52) & 0xFF, gUnknown_08376180[v2][*(_WORD *)(a1 + 56)]);
    v3 = *(_WORD *)(v1 + 56) + 1;
    *(_WORD *)(v1 + 56) = v3;
    if ( v3 >= (signed int)gUnknown_08376194[*(_WORD *)(v1 + 54)] )
      result = 1;
  }
  return result;
}
