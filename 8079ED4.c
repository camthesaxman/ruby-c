int __fastcall sub_8079ED4(unsigned __int8 a1)
{
  int v1; // r4@1
  int result; // r0@2
  _DWORD *v3; // r0@5

  v1 = (unsigned __int8)battle_get_per_side_status(a1);
  if ( sub_8076BE0() << 24 )
  {
    result = 2;
  }
  else
  {
    if ( v1 && v1 != 3 )
      v3 = (_DWORD *)67108874;
    else
      v3 = (_DWORD *)67108876;
    result = *v3 & 3;
  }
  return result;
}
