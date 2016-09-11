int __fastcall ConvertDateToDayCount(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // r7@1
  unsigned int v4; // r6@1
  int v5; // r8@1
  int v6; // r5@1
  int i; // r4@1
  int *v8; // r1@6
  int v9; // r4@6
  int v10; // r0@7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  for ( i = a1 - 1; i > 0; --i )
  {
    v6 = (v6 + 365) & 0xFFFF;
    if ( (unsigned __int8)IsLeapYear(i) == 1 )
      v6 = (v6 + 1) & 0xFFFF;
  }
  if ( (signed int)(v4 - 1) > 0 )
  {
    v8 = (int *)&sNumDaysInMonths;
    v9 = v4 - 1;
    do
    {
      v10 = *v8;
      ++v8;
      v6 = (v6 + v10) & 0xFFFF;
      --v9;
    }
    while ( v9 );
  }
  if ( v4 > 2 && (unsigned __int8)IsLeapYear(v3) == 1 )
    v6 = (v6 + 1) & 0xFFFF;
  return (v6 + v5) & 0xFFFF;
}
