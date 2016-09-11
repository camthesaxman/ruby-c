int __fastcall sub_810AEAC(unsigned __int16 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r1@1
  unsigned __int16 v6; // r0@5

  v3 = a1;
  v4 = a2;
  v5 = (unsigned __int8)sub_810AE84(a3);
  if ( v4 == 1 )
  {
    if ( v3 )
      v6 = v3 - v5;
    else
      v6 = 360 - v5;
  }
  else
  {
    if ( v4 != 2 )
      return v3;
    if ( v3 >= 360 - v5 )
      return 0;
    v6 = v3 + v5;
  }
  return v6;
}
