int __fastcall sub_810F018(int a1, int a2, int a3)
{
  unsigned int v3; // r5@1
  char *v4; // r1@4
  signed __int16 v5; // r0@6
  int v7; // [sp+Ch] [bp-4h]@0

  v3 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v3], 5, a3) )
    {
      if ( !GetMonData((int)&dword_3004360[25 * v3], 45, a3) )
      {
        v4 = (char *)&gBaseStats + 28 * (unsigned __int16)GetMonData((int)&dword_3004360[25 * v3], 11, a3);
        if ( v4[6] == 12 || v4[7] == 12 )
        {
          v5 = 1;
          goto _0810F082;
        }
      }
    }
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 5 );
  v5 = 0;
_0810F082:
  v202E8DC = v5;
  return v7;
}
