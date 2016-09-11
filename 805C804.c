signed int __fastcall npc_paltag_by_palslot(unsigned __int8 a1)
{
  int v1; // r1@2
  int v2; // r0@2
  int v4; // r3@5

  if ( a1 <= 9u )
  {
    v1 = (int)*(&gUnknown_0837399C + (unsigned __int8)byte_30005A4);
    v2 = 2 * a1;
    return *(_WORD *)(v2 + v1);
  }
  v4 = 0;
  if ( gUnknown_083738E4[0] != 4607 )
  {
    while ( (unsigned __int16)gUnknown_083738E4[4 * v4] != (unsigned __int16)word_30005A6 )
    {
      v4 = (v4 + 1) & 0xFF;
      if ( gUnknown_083738E4[4 * v4] == 4607 )
        return 4607;
    }
    v1 = dword_83738E8[2 * v4];
    v2 = 2 * (unsigned __int8)byte_30005A4;
    return *(_WORD *)(v2 + v1);
  }
  return 4607;
}
