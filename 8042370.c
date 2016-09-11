int sp0B6_daycare()
{
  int v0; // r1@1
  _BYTE *v1; // r2@1
  int result; // r0@2
  int v3; // r0@3

  if ( sub_80422B4(33720016) << 24 )
  {
    result = 1;
  }
  else
  {
    v3 = (unsigned __int8)daycare_count_pokemon(33720016, v0, v1);
    if ( v3 )
      result = (v3 + 1) & 0xFF;
    else
      result = 0;
  }
  return result;
}
