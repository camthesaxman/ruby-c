int __fastcall npc_load_two_palettes__no_record(unsigned __int16 a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r1@1
  unsigned int v4; // r5@1
  int v5; // r3@1
  unsigned __int8 *v6; // r5@2
  int v8; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2 << 24;
  v4 = v3 >> 24;
  pal_patch_for_npc(a1, BYTE3(v3));
  v5 = 0;
  if ( gUnknown_08373874[0] != 4607 )
  {
    v6 = (unsigned __int8 *)&gUnknown_0830FD14 + v4;
    while ( (unsigned __int16)gUnknown_08373874[4 * v5] != v2 )
    {
      v5 = (v5 + 1) & 0xFF;
      if ( gUnknown_08373874[4 * v5] == 4607 )
        return v8;
    }
    pal_patch_for_npc(*(_WORD *)(2 * (unsigned __int8)byte_30005A4 + dword_8373878[2 * v5]), *v6);
  }
  return v8;
}
