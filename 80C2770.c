int __fastcall sub_80C2770(int a1)
{
  unsigned int v1; // r0@1
  __int16 v2; // r3@1
  int *v3; // r1@2
  __int16 v4; // r0@2
  __int16 v5; // r0@3
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v2018004;
  if ( v2018004 )
  {
    if ( v2018004 == 2 )
      dword_3004B20[10 * (v1 >> 24)] = (int)sub_80C27EC;
  }
  else
  {
    v3 = &dword_3004B20[10 * (v1 >> 24)];
    v4 = *((_WORD *)v3 + 5) + 1;
    *((_WORD *)v3 + 5) = v4;
    if ( v4 == 21 )
    {
      *((_WORD *)v3 + 5) = v2;
      sub_80C3158("Ã„È‚ÿ", v2018000);
      v5 = sub_80C34AC("Ã„È‚ÿ");
      sub_80C34CC(v5, 144, 0xFFFF, 1088);
    }
  }
  return v7;
}
