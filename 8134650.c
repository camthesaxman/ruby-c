signed int __fastcall sub_8134650(unsigned __int8 a1, unsigned __int16 a2)
{
  int v2; // r5@1
  int v3; // r6@1
  signed int v5; // r6@4
  int v6; // r4@6
  signed int v7; // r1@9
  char v8; // [sp+28h] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v8 = 0;
  sub_813601C(0);
  if ( !v202E8DC && v202533E == v3 )
  {
    v5 = 50;
    if ( v2 )
      v5 = 100;
    v6 = 0;
    while ( *(_BYTE *)(44 * v6 + 0x202537C) == v5 )
    {
      sub_8135200(*(_WORD *)(44 * v6 + 0x2025370), *(_WORD *)(44 * v6 + 0x2025372), 1, v2);
      if ( ++v6 > 2 )
      {
        v7 = 0;
        if ( v8 == 3 )
          v7 = 1;
        return v7;
      }
    }
  }
  return 0;
}
