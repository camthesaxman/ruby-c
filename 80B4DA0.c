unsigned int __fastcall CalcBerryYieldInternal(int a1, int a2, int a3)
{
  int v3; // r6@1
  unsigned int v4; // r0@2
  unsigned int v5; // r5@3
  int v6; // r0@4

  a1 = (unsigned __int16)a1;
  v3 = (unsigned __int16)a2;
  a3 = (unsigned __int8)a3;
  if ( (_BYTE)a3 )
  {
    v5 = (a1 - (unsigned __int16)a2) * (a3 - 1)
       + (unsigned __int16)Random()
       % ((a1 - (unsigned __int16)a2) * a3 - (a1 - (unsigned int)(unsigned __int16)a2) * (a3 - 1) + 1);
    if ( (v5 & 3) <= 1 )
      v6 = v5 >> 2;
    else
      v6 = (v5 >> 2) + 1;
    v4 = (v6 + v3) << 24;
  }
  else
  {
    v4 = a2 << 24;
  }
  return v4 >> 24;
}
