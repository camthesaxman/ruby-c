signed int __fastcall sub_8053B00(_BYTE *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  _BYTE *v3; // r6@1
  unsigned __int8 v4; // r5@1
  int v5; // r4@1
  signed int result; // r0@4
  int v7; // r0@8

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a3 != 8 && FlagGet(2093) << 24 )
    goto LABEL_15;
  if ( v5 == 5 )
    return 16;
  if ( (MetatileBehavior_IsSurfableWaterOrUnderwater(v4) & 0xFF) == 1 )
    return 8;
  if ( sub_8053C44() != 1 )
    goto LABEL_15;
  v7 = *v3;
  if ( v7 == 2 )
    return 2;
  if ( v7 != 4 )
LABEL_15:
    result = 1;
  else
    result = 4;
  return result;
}
