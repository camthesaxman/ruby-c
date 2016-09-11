int __fastcall sub_8047254(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  int v3; // r4@4
  int (__fastcall *v4)(int); // r0@5
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 15 )
  {
    *(_WORD *)(v1 + 46) = 0;
    if ( battle_type_is_double(0) << 24
      && v2017849 & 1
      && (v3 = *(_WORD *)(v1 + 58), v3 == (unsigned __int8)battle_get_side_with_given_state(3)) )
    {
      v4 = sub_8047230;
    }
    else
    {
      v4 = sub_8046C78;
    }
    *(_DWORD *)(v1 + 28) = v4;
  }
  return v6;
}
