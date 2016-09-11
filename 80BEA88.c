int sub_80BEA88()
{
  int v0; // r4@4
  int v2; // [sp+10h] [bp-4h]@0

  if ( !(unsigned __int8)sub_80BF77C(0xFFFF) )
  {
    byte_3005D38 = sub_80BF74C(33717868);
    if ( byte_3005D38 != -1 && (unsigned __int8)sub_80BF1B4(25) != 1 )
    {
      v0 = 36 * byte_3005D38 + 33717868;
      *(_BYTE *)v0 = 25;
      *(_BYTE *)(v0 + 1) = 0;
      *(_WORD *)(v0 + 2) = v20281CE;
      *(_WORD *)(v0 + 6) = sub_8053108(5u) - v20281D2;
      *(_WORD *)(v0 + 4) = v20281D0;
      *(_WORD *)(v0 + 8) = v20281D4;
      *(_BYTE *)(v0 + 10) = v20281D6;
      StringCopy((_BYTE *)(v0 + 19), (_BYTE *)0x2024EA4);
      sub_80BE138(v0);
      *(_BYTE *)(v0 + 11) = 2;
    }
  }
  return v2;
}
