int sub_8011E8C()
{
  _BYTE *v0; // r0@6
  signed int v1; // r2@12
  _WORD *v2; // r3@13
  signed int v3; // r2@15
  _BYTE *v4; // r0@15
  int v6; // [sp+1Ch] [bp-4h]@0

  sub_801365C(1);
  if ( (v2024D26 || !(sub_8015DFC() << 24) && !(sub_8016558() << 24)) && !(sub_80173A4() & 0xFF) )
  {
    v2016059 = 0;
    if ( !(sub_80170DC() & 0xFF) )
    {
      sub_801365C(0);
      v2024C6C &= 0xFFA7FDFF;
      v2016002 = 0;
      v20160A1 = 0;
      v201600C = 0;
      v2024BEC = 0;
      v2024C68 = 0;
      v0 = (_BYTE *)33705250;
      do
        *v0-- = 0;
      while ( (signed int)v0 >= 33705246 );
      if ( v2024D26 )
      {
        v2024A7F = 12;
        dword_30042D4 = (int)sub_80138F0;
      }
      else
      {
        if ( (unsigned __int8)byte_30042F3 <= 0xFEu )
          ++byte_30042F3;
        v1 = 0;
        if ( (signed int)v2024A68 > 0 )
        {
          v2 = (_WORD *)33705056;
          do
          {
            *(_BYTE *)(v1 + 33704984);
            *(_BYTE *)(v1 + 33704984) = -1;
            *v2 = 0;
            ++v2;
            ++v1;
          }
          while ( v1 < v2024A68 );
        }
        v3 = 3;
        v4 = (_BYTE *)33644651;
        do
        {
          *v4-- = 6;
          --v3;
        }
        while ( v3 >= 0 );
        v20160A6 = v2024C0C;
        dword_30042D4 = (int)sub_8012324;
        v2024D1C = Random(33644710);
      }
    }
  }
  return v6;
}
