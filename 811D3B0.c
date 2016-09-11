signed int __fastcall sub_811D3B0(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  unsigned __int8 v3; // r0@2
  signed int result; // r0@2

  v1 = a1;
  v2 = *(_WORD *)(a1 + 10) + 1;
  *(_WORD *)(v1 + 10) = v2;
  if ( v2 <= 6 )
  {
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 14) = gUnknown_083FD93A[*(_WORD *)(v1 + 10) - 1];
    result = 1;
  }
  else
  {
    v40000BA &= 0xC5FFu;
    v40000BA &= 0x7FFFu;
    sub_811D6D4(v40000BA);
    v3 = FindTaskIdByFunc((int)sub_811D1C8);
    DestroyTask(v3);
    result = 0;
  }
  return result;
}
