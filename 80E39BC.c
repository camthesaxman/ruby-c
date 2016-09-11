int __fastcall sub_80E39BC(unsigned int a1, __int16 a2)
{
  unsigned int v2; // r3@1
  int v3; // r2@1
  unsigned int v4; // r4@2
  unsigned __int16 v5; // r5@2
  int v6; // r2@3
  int v7; // r3@5
  int v9; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = 0;
  do
  {
    v4 = v2 >> 1;
    v5 = v3 + 1;
    if ( v2 & 1 )
    {
      v6 = 16 * v3 & 0xFFFF;
      if ( __OFSUB__(v6, v6 + 16) ^ 1 )
      {
        v7 = v6 + 16;
        do
        {
          *(_WORD *)(2 * v6 + 0x202EEC8) = a2;
          v6 = (v6 + 1) & 0xFFFF;
        }
        while ( v6 < v7 );
      }
    }
    v2 = v4;
    v3 = v5;
  }
  while ( v5 <= 0x1Fu );
  return v9;
}
