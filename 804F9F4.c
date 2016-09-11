int __fastcall sub_804F9F4(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r2@1
  int *v3; // r2@3
  __int16 v4; // r0@5
  int *v5; // r1@15
  signed __int16 v6; // r0@15
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = ((*(_WORD *)(dword_3004854 + 84) + 6144) & 0xFFFFu) >> 8;
  if ( v2 <= (unsigned int)(unsigned __int8)gUnknown_08216303[*(_BYTE *)(dword_3004854 + 166)] + 20
    || v2 >= (unsigned int)(unsigned __int8)gUnknown_08216303[*(_BYTE *)(dword_3004854 + 166)] + 40 )
  {
    v5 = &dword_3004B20[10 * a1];
    v6 = 0;
_0804FB10:
    *((_WORD *)v5 + 4) = v6;
    return v8;
  }
  v3 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v3 + 4) )
  {
    if ( !*(_BYTE *)(dword_3004854 + 331) )
    {
      v4 = (unsigned __int16)Random() / 0x28Fu;
      if ( (signed int)*(_WORD *)(dword_3004854 + 86) > 499 )
      {
        if ( (unsigned __int8)v4 > 0x41u )
          word_3002A34 = 17699;
        if ( (((unsigned __int8)v4 - 41) & 0xFFu) <= 0x18 )
          word_3002A34 = 21554;
        if ( (unsigned __int8)v4 <= 9u )
          sub_804F890(2u, 5u);
      }
      else if ( (unsigned __int8)v4 <= 0x42u )
      {
        word_3002A34 = 21554;
      }
      else
      {
        word_3002A34 = 17699;
      }
      v5 = &dword_3004B20[10 * v1];
      v6 = 1;
      goto _0804FB10;
    }
    word_3002A34 = 17699;
    *((_WORD *)v3 + 4) = 1;
  }
  return v8;
}
