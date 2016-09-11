unsigned int __fastcall sub_80E5DA0(int a1, __int16 a2, __int16 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  unsigned int v5; // r4@1

  v5 = CheckForFieldObjectCollision(a1, a2, a3, a4, a5) & 0xFF;
  if ( v5 <= 4 )
  {
    if ( v5 )
      goto LABEL_10;
    if ( IsRunningDisallowedByMetatile(a5) << 24 )
      v5 = 2;
    if ( v5 )
LABEL_10:
      sub_80E5E4C();
  }
  return v5;
}
