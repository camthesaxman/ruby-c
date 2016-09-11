int __fastcall sub_8101460(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r6@1
  unsigned int v3; // r5@2
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v2039234 = 0;
  if ( (unsigned __int8)sub_8101340(BYTE3(v1)) != 1 )
  {
    v3 = 0;
    if ( v201F008 > 0u )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v201F000 + v3) )
        {
          sub_8101118(*(_BYTE *)(v201F000 + v3), 33788340);
          if ( (unsigned __int8)sub_8101200(v2, v3, 33788340) == 1 )
            break;
        }
        v3 = (v3 + 1) & 0xFF;
        if ( v3 >= v201F008 )
          goto _081014D2;
      }
      v20391B4 = v3;
      ++v2039234;
    }
_081014D2:
    if ( v2039234 )
      sub_81013B8(
        *(_BYTE *)(v201F004 + v20391B4) >> 4,
        (*(_BYTE *)(v201F004 + v20391B4) & 0xF) - v20391B6 + 1,
        v20391B5 + (*(_BYTE *)(v201F004 + v20391B4) >> 4) - 1,
        *(_BYTE *)(v201F004 + v20391B4) & 0xF);
  }
  return v5;
}
