signed int __fastcall sub_8040D3C(unsigned __int16 a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r1@1
  int v5; // r0@1
  signed int v6; // r3@1
  char *v7; // r1@4
  signed int v8; // r0@7

  v3 = a2;
  v4 = a1;
  v5 = v4;
  a3 = (unsigned __int8)a3;
  v6 = 0;
  if ( v4 == 32 || v4 == 29 )
  {
    if ( a3 == 2 )
    {
      v7 = &gSpeciesNames[11 * v4];
    }
    else
    {
      v7 = (char *)&gUnknown_08208337;
      if ( v5 == 32 )
        v7 = (char *)&unk_820832C;
    }
    v8 = StringCompareWithoutExtCtrlCodes(v3, (int)v7);
    v6 = 0;
    if ( !v8 )
      v6 = 1;
  }
  return v6;
}
