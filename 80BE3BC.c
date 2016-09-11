int sub_80BE3BC()
{
  int v0; // r1@5
  int v1; // r5@5
  unsigned int v2; // r4@5
  int v4; // [sp+10h] [bp-4h]@0

  if ( !(unsigned __int8)sub_80BF77C(21845) )
  {
    byte_3005D38 = sub_80BF74C(33717868);
    if ( byte_3005D38 != -1 && (unsigned __int8)sub_80BF1B4(22) != 1 )
    {
      sub_80BF20C();
      if ( v2038726 > 0x13u )
      {
        v0 = byte_3005D38;
        v1 = 36 * byte_3005D38 + 33717868;
        *(_BYTE *)v1 = 22;
        *(_BYTE *)(v1 + 1) = 0;
        *(_BYTE *)(v1 + 18) = v202E83C;
        v2 = 0;
        do
        {
          *(_WORD *)(v1 + 6 + 2 * v2) = *(_WORD *)(4 * v2 + 0x2038724);
          *(_WORD *)(36 * v0 + 0x2027E78 + 2 * v2) = *(_WORD *)(4 * v2 + 0x2038726);
          v2 = (v2 + 1) & 0xFF;
        }
        while ( v2 <= 2 );
        *(_BYTE *)(v1 + 2) = GetPriceReduction(1);
        StringCopy((_BYTE *)(v1 + 19), (_BYTE *)0x2024EA4);
        sub_80BE138(v1);
        *(_BYTE *)(v1 + 3) = 2;
      }
    }
  }
  return v4;
}
