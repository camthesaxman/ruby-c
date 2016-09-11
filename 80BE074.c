int sub_80BE074()
{
  unsigned int v0; // r1@2
  unsigned int v1; // r5@2
  int v2; // r4@10
  int v4; // [sp+10h] [bp-4h]@0

  if ( !(sub_80BF77C(0xFFFF) << 24) )
  {
    v0 = 0;
    v1 = 0;
    do
    {
      v1 = (v1 + (unsigned __int8)byte_3004316[v0]) & 0xFFFF;
      v0 = (v0 + 1) & 0xFF;
    }
    while ( v0 <= 0xA );
    if ( v1 > 0xFF )
      v1 = 255;
    if ( v1 > 2 && v2024D26 == 1 )
    {
      byte_3005D38 = sub_80BF74C(33717868);
      if ( byte_3005D38 != -1 && (unsigned __int8)sub_80BF1B4(23) != 1 )
      {
        v2 = 36 * byte_3005D38 + 33717868;
        *(_BYTE *)v2 = 23;
        *(_BYTE *)(v2 + 1) = 0;
        *(_WORD *)(v2 + 12) = word_30042E6;
        *(_WORD *)(v2 + 14) = word_3004300;
        *(_BYTE *)(v2 + 16) = v1;
        *(_BYTE *)(v2 + 17) = v2024D26;
        *(_BYTE *)(v2 + 18) = v202E83C;
        StringCopy((_BYTE *)(v2 + 19), (_BYTE *)0x2024EA4);
        sub_80BE138(v2);
        *(_BYTE *)(v2 + 2) = 2;
      }
    }
  }
  return v4;
}
