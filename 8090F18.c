int __fastcall pokedex_count(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r5@1
  int v3; // r0@1
  unsigned __int16 v4; // r4@4
  int v5; // r0@5
  unsigned __int8 v6; // r1@5

  v1 = a1;
  v2 = 0;
  v3 = 0;
  do
  {
    if ( v1 )
    {
      if ( v1 != 1 )
      {
        v4 = v3 + 1;
        goto _08090F56;
      }
      v4 = v3 + 1;
      v5 = (v3 + 1) & 0xFFFF;
      v6 = 1;
    }
    else
    {
      v4 = v3 + 1;
      v5 = (v3 + 1) & 0xFFFF;
      v6 = 0;
    }
    if ( sub_8090D90(v5, v6) << 24 )
      v2 = (v2 + 1) & 0xFFFF;
_08090F56:
    v3 = v4;
  }
  while ( v4 <= 0x181u );
  return v2;
}
