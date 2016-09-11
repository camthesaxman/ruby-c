int __fastcall sub_8149B90(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r1@1
  int v3; // r6@2
  unsigned int v4; // r4@3
  unsigned int v5; // r4@6
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 19) > 47 )
  {
    *v2 = (int)sub_8149C10;
  }
  else
  {
    v3 = 4 * a1;
    if ( !*((_WORD *)v2 + 19) )
    {
      v4 = 0;
      do
      {
        sub_8149794(16 * v4, 4u);
        v4 = (v4 + 1) & 0xFF;
      }
      while ( v4 <= 0xF );
    }
    if ( HIWORD(dword_3004B20[2 * (v3 + v1) + 9]) == 32 )
    {
      v5 = 0;
      do
      {
        sub_8149794(16 * v5, 8u);
        v5 = (v5 + 1) & 0xFF;
      }
      while ( v5 <= 0xF );
    }
    ++HIWORD(dword_3004B20[2 * (v3 + v1) + 9]);
  }
  return v7;
}
