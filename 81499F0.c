int __fastcall sub_81499F0(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r1@1
  int v3; // r7@2
  unsigned int v4; // r4@3
  int *v5; // r6@3
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 19) > 63 )
  {
    *((_WORD *)v2 + 19) = 96;
    *v2 = (int)sub_8149A60;
  }
  else
  {
    v3 = 4 * a1;
    if ( !(*((_WORD *)v2 + 19) & 7) )
    {
      v4 = 0;
      v5 = &dword_3004B20[10 * a1];
      do
      {
        sub_8149614(2 * (*((_WORD *)v5 + 19) & 0x78) + ((_BYTE)v4 << 6));
        v4 = (v4 + 1) & 0xFF;
      }
      while ( v4 <= 3 );
    }
    ++HIWORD(dword_3004B20[2 * (v3 + v1) + 9]);
  }
  return v7;
}
