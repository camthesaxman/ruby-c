signed int __fastcall sub_80A5350(unsigned __int8 a1)
{
  _BYTE *v1; // r4@1
  signed int result; // r0@5

  v1 = &byte_3004B28[40 * a1];
  if ( (unsigned __int8)sub_80A52C4(a1, *(_WORD *)(4 * v2038560 + dword_3005D24 + 2)) == 1 )
  {
    if ( v2038559 == 3 )
      sub_80A418C(*((_WORD *)v1 + 1), 1, v1[4], v1[6], 3u);
    else
      sub_80A418C(*((_WORD *)v1 + 1), 1, v1[4], v1[6], 2u);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
