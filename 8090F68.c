int __fastcall sub_8090F68(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r5@1
  unsigned __int16 v3; // r0@1
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
        goto _08090FB0;
      }
      v4 = v3 + 1;
      v5 = (unsigned __int16)HoennToNationalOrder(v3 + 1);
      v6 = 1;
    }
    else
    {
      v4 = v3 + 1;
      v5 = (unsigned __int16)HoennToNationalOrder(v3 + 1);
      v6 = 0;
    }
    if ( sub_8090D90(v5, v6) << 24 )
      v2 = (v2 + 1) & 0xFFFF;
_08090FB0:
    v3 = v4;
  }
  while ( v4 <= 0xC9u );
  return v2;
}
