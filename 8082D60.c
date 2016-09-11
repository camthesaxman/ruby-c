int __fastcall sub_8082D60(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r4@1
  _WORD *v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a2;
  v3 = &byte_3004B28[40 * a1 + 6];
  if ( a2 != *v3 )
  {
    if ( a2 > 1u )
      sub_8082D18(a2);
    else
      sub_8082D4C();
    *v3 = v2;
  }
  return v5;
}
